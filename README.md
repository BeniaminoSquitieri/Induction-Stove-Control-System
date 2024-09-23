# SistemEmbeddedProject
# Embedded Systems Project - Induction Stove Control System

## Project Overview
This project was developed as part of the **Embedded Systems** course at the University of Salerno, Department of Information Engineering, Electrical Engineering, and Applied Mathematics. The goal is to design and implement firmware for controlling an induction stove. The system is equipped with power management capabilities, error handling, and user interaction through buttons for power adjustment and a sensor to detect the presence of a cooking pot.

## Features
The firmware controls the following aspects of the induction stove:
- **Power Management**: 
  - The system supports four power levels: 300W, 500W, 1000W, and 1500W.
  - Power adjustment is performed via dedicated increase and decrease buttons.
- **LED Feedback**: 
  - A LED provides visual feedback, showing the power level by varying the blinking frequency.
  - Error states, such as the removal of the cooking pot, are indicated with a dedicated error LED.
- **Error Management**: 
  - The system monitors the presence of a cooking pot and adjusts or halts operation accordingly.
  - Errors are logged, and the system enters a protective state if a pot is removed during operation.

## How It Works
1. **Power ON/OFF**: The stove has an ON/OFF button. When the stove is off, pressing this button will turn it on. When the stove is on, holding this button for at least 1 second turns the stove off.
2. **Power Levels**: After the stove is powered on, the user can adjust the power level using the increase and decrease buttons. The available power levels are:
   - 300W
   - 500W
   - 1000W
   - 1500W
3. **Safety Mechanism**: The stove will only operate when a pot is detected. If the pot is removed while the stove is on, the system will flash the error LED and give the user 10 seconds to replace the pot before turning off the heating element.
4. **Error Handling**: If the system detects abnormal conditions, it triggers the error LED and adjusts operations accordingly.

## System Design
The system was designed using several state machines to handle different aspects of the stove's operation:
- **Power Management Stateflow**: Controls the power levels and monitors user input from the increase and decrease buttons.
- **Error Management Stateflow**: Handles error conditions such as pot removal, ensuring safe operation.
- **Stove Management Stateflow**: Controls the LED blinking frequency according to the selected power level and system state.

## UML Diagrams
Several UML diagrams were used to model the system’s behavior:
- **Use Case Diagram**: Describes the interaction between the user and the system.
- **State Diagram**: Illustrates the system’s states, transitions, and the logic behind the power levels, pot detection, and error states.
- **Sequence Diagrams**: Show the sequence of interactions between the user and the stove, including button presses and system responses.

## Test Scenarios
The firmware was tested under various conditions, including:
1. Turning the stove on and off.
2. Adjusting power levels from 300W to 1500W.
3. Handling the removal of the pot during operation.
4. Simultaneous button presses.
5. Error conditions such as pot removal at different power levels.

## Getting Started
To test and run this project, you will need:
- A microcontroller compatible with the embedded firmware (tested on [insert specific hardware details here]).
- Buttons for power ON/OFF and power level adjustment.
- A sensor for detecting the presence of a cooking pot.

## Installation

### Prerequisites
Before building and running the firmware, ensure you have the following:
- **Development Board**: A microcontroller capable of running embedded C code (tested on STM32).
- **Development Environment**: 
  - [STM32CubeIDE](https://www.st.com/en/development-tools/stm32cubeide.html) or other compatible IDE for building and flashing the firmware.
  - **Stateflow** and **MATLAB** (optional) if you wish to modify and simulate the state machine logic.
- **Additional Tools**:
  - JTAG/SWD programmer (e.g., ST-Link) for flashing the firmware.
  - Soldered buttons for ON/OFF, increase, and decrease operations.
  - Proximity sensor or pressure sensor to detect the presence of a pot.

### Clone repository

1. Clone the repository:
   ```bash
   git clone https://github.com/[YourRepository]/embedded-stove-control.git

### Building the Firmware

1. Open the project in **STM32CubeIDE** (or your preferred IDE).
   
2. Ensure that all required libraries (HAL, drivers, etc.) are properly linked.

3. Build the project:
   - In **STM32CubeIDE**, go to `Project > Build All` or use the appropriate build command in your IDE.

4. Connect your development board to the computer using a JTAG/SWD programmer.

### Flashing the Firmware

1. Flash the firmware:
   - In **STM32CubeIDE**, go to `Run > Debug` to flash the firmware onto your microcontroller.

---

## Running the Firmware

Once the firmware is flashed:

1. Power on the embedded system.
2. The device will remain idle until the ON/OFF button is pressed.
3. Press the ON/OFF button to turn on the stove.
4. Use the `Increase` and `Decrease` buttons to adjust the power level.
5. Place a pot on the stove to activate heating. The power level will be indicated by the blinking frequency of the LED.
6. If the pot is removed, the error LED will blink, and the stove will stop after 10 seconds unless the pot is replaced.

---

## Usage

### Controls

- **Power ON/OFF**: Press the ON/OFF button to turn the stove on. Hold it for 1 second to turn it off.
- **Adjust Power**:
  - Press the `Increase` button to raise the power (300W, 500W, 1000W, 1500W).
  - Press the `Decrease` button to lower the power.
- **Error Handling**: If the pot is removed during operation, the error LED will blink, and the stove will stop heating after 10 seconds.

### LED Indicators

- **Power LED**:
  - 300W: Blinks every 2 seconds.
  - 500W: Blinks every 1 second.
  - 1000W: Blinks every 0.5 seconds.
  - 1500W: Blinks every 0.25 seconds.
- **Error LED**: Blinks when the pot is removed during operation.

---

## Testing

### Unit Testing

Unit tests were performed on the Stateflow model to verify the system’s behavior under various conditions, including:

- Powering on and off the device.
- Adjusting power levels while the pot is on the stove.
- Simulating error states such as pot removal during operation.

### Integration Testing

The firmware was also tested on physical hardware to verify the system's performance in real-world scenarios.

To replicate the tests:

1. Load the test cases defined in `test_cases/` (if provided).
2. Run the test suite using MATLAB/Stateflow to verify the state machine behavior.
3. Verify the results using the coverage report generated.

---

## Future Improvements

Potential improvements to the system include:

- **Temperature Sensor Integration**: To adjust power levels based on pot temperature.
- **Overheat Protection**: Automatic shutdown if internal components overheat.
- **Wireless Control**: Remote control via a mobile app or web interface.
- **LCD Display**: Displaying the current power level and error messages.

---

## Troubleshooting

### Common Issues

- **Stove does not turn on**:
  - Ensure that the power supply is properly connected.
  - Check the button connections for proper contact.

- **LED is not blinking**:
  - Verify that the LED pins are correctly configured in the firmware.
  - Check the LED connections.

- **Error LED blinks continuously**:
  - Ensure that the pot is correctly placed on the stove.
  - Check the proximity sensor for any malfunction.
   


