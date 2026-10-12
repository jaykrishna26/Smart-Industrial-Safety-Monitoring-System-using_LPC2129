# Smart Industrial Safety Monitoring System Using LPC2129

## 📌 Project Overview

The Smart Industrial Safety Monitoring System using LPC2129 is an embedded systems project designed to monitor industrial conditions using sensors and a microcontroller.

The system uses the LPC2129 ARM7 microcontroller to acquire sensor data through the Analog-to-Digital Converter (ADC), process the readings, and display information on an LCD. UART communication is used for serial data transmission.

The project demonstrates the application of Embedded C programming and peripheral interfacing in an industrial monitoring system.

## 🎯 Objectives

* To develop an industrial monitoring system using the LPC2129 microcontroller.
* To interface sensors with the microcontroller.
* To acquire analog sensor data using the ADC.
* To display sensor readings on a 16×2 LCD.
* To implement UART serial communication.
* To understand Embedded C programming and microcontroller peripheral interfacing.

## 🛠️ Hardware Requirements

* LPC2129 ARM7 Microcontroller
* Sensors for Industrial Monitoring
* 16×2 LCD Display
* Power Supply
* Connecting Wires
* Required Interface Components

## 💻 Software Requirements

* Embedded C
* Keil µVision IDE
* ARMCC Compiler
* LPC2129 Microcontroller Support Files

## ⚙️ Technologies Used

* Embedded C Programming
* ARM7TDMI-S Microcontroller
* ADC (Analog-to-Digital Converter)
* UART (Universal Asynchronous Receiver/Transmitter)
* GPIO (General-Purpose Input/Output)
* 16×2 LCD Interfacing

## 🔄 Working Principle

1. Sensors measure the selected industrial parameters.
2. The LPC2129 microcontroller receives sensor signals.
3. The ADC converts analog sensor signals into digital values.
4. The microcontroller processes the sensor readings.
5. The processed data is displayed on the LCD.
6. UART provides serial communication for transmitting data to an external device.

## 📂 Project Structure

```text
Smart-Industrial-Safety-Monitoring-System/
│
├── LCD_4bit.c
├── README.md
├── UART_driver.c
├── adc_driver.c
├── delay.c
├── header_uart.h
└── project_main.c
```

## 📄 File Descriptions

| File Name        | Description                                                    |
| ---------------- | -------------------------------------------------------------- |
| `project_main.c` | Contains the main program and system control logic.            |
| `LCD_4bit.c`     | Contains functions for interfacing with the LCD in 4-bit mode. |
| `UART_driver.c`  | Contains UART communication functions.                         |
| `adc_driver.c`   | Contains ADC configuration and data acquisition functions.     |
| `delay.c`        | Contains delay functions used by the system.                   |
| `header_uart.h`  | Contains UART-related declarations and definitions.            |
| `README.md`      | Contains project documentation.                                |

## 📚 Learning Outcomes

* Understanding the LPC2129 ARM7 microcontroller.
* Developing embedded applications using Embedded C.
* Interfacing sensors with a microcontroller.
* Understanding ADC configuration and data acquisition.
* Implementing UART serial communication.
* Interfacing a 16×2 LCD.
* Understanding peripheral interfacing in embedded systems.

## 🚀 Future Enhancements

* Integrate additional industrial monitoring sensors.
* Implement warning alerts for unsafe conditions.
* Add wireless monitoring capabilities.
* Store sensor readings for analysis.
* Develop a remote monitoring dashboard.

## 👨‍💻 Project Domain

**Embedded Systems | ARM7 | Embedded C | ADC | UART | Sensor Interfacing**

## 📄 License

This project is intended for educational and learning purposes.

