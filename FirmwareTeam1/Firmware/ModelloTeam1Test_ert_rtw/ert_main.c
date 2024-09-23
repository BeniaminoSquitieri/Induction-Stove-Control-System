#include "ModelloTeam1Test.h"
#include "rtwtypes.h"
#include "MW_target_hardware_resources.h"

volatile int IsrOverrun = 0;
static boolean_T OverrunFlag = 0;
void rt_OneStep(void)
{
  /* Check for overrun. Protect OverrunFlag against preemption */
  if (OverrunFlag++) {
    IsrOverrun = 1;
    OverrunFlag--;
    return;
  }

  __enable_irq();
  ModelloTeam1Test_step();

  /* Get model outputs here */
  __disable_irq();
  OverrunFlag--;
}

volatile boolean_T stopRequested;
volatile boolean_T runModel;
int main(void)
{
  float modelBaseRate = 0.25;
  float systemClock = 84;

  /* Initialize variables */
  stopRequested = false;
  runModel = false;

#if defined(MW_MULTI_TASKING_MODE) && (MW_MULTI_TASKING_MODE == 1)

  MW_ASM (" SVC #1");

#endif

  ;
  (void)systemClock;
  HAL_Init();
  bootloaderInit();
  SystemCoreClockUpdate();
  rtmSetErrorStatus(ModelloTeam1Test_M, 0);
  ModelloTeam1Test_initialize();
  ;
  ARMCM_SysTick_Config(modelBaseRate);
  runModel = rtmGetErrorStatus(ModelloTeam1Test_M) == (NULL);
  __enable_irq();
  ;
  while (runModel) {
    stopRequested = !(rtmGetErrorStatus(ModelloTeam1Test_M) == (NULL));
    runModel = !(stopRequested);
  }

  /* Terminate model */
  ModelloTeam1Test_terminate();
  ;
  return 0;
}
