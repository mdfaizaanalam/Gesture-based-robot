# Gesture-based-robot

This project demonstrates a gesture-controlled robotic car using Arduino, accelerometer, RF module, and motor driver. The car can be controlled by hand gestures through the accelerometer, and it can be further extended to be controlled by an Android-based mobile application with different modes (e.g., touch buttons mode, voice recognition mode). An automatic obstacle detection system is also implemented for improved safety.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Components](#components)
- [Circuit Diagram](#circuit-diagram)
- [Software](#software)
- [Installation](#installation)
- [Usage](#usage)

## Introduction

A robot is an intelligent machine commanded by a computer application to perform various operations and services. This project focuses on creating a gesture-controlled robotic car that uses an Arduino microcontroller and various sensors to operate based on hand gestures.

## Features

- Gesture-controlled movement
- Wireless control using RF module
- Obstacle detection and avoidance
- Android app integration for remote control

## Components

- Arduino Uno
- Accelerometer ADXL335
- RF 433 MHz Module
- Motor Driver L298N
- Prototyping Board
- 9V and 12V Batteries
- TT Gear Motors
- Rubber Wheels
- PCB (Printed Circuit Board)
- Male-Female Header Pins

## Circuit Diagram

Textual circuit diagram for your project which illustrating the connections between components such as the Arduino, accelerometer, RF module, motor driver, and motors. Here's a textual guide for what the diagram should include:

#### Textual Representation

1. **Accelerometer (ADXL335)**:
   - **VCC** → Arduino 5V
   - **GND** → Arduino GND
   - **X** → Arduino A1
   - **Y** → Arduino A2
   - **Z** → Arduino A3

2. **RF Transmitter Module (for the transmitter Arduino)**:
   - **VCC** → Arduino 5V
   - **GND** → Arduino GND
   - **DATA** → Arduino Digital Pin 12

3. **RF Receiver Module (for the receiver Arduino)**:
   - **VCC** → Arduino 5V
   - **GND** → Arduino GND
   - **DATA** → Arduino Digital Pin 11

4. **Motor Driver (L298N)**:
   - **IN1** → Arduino Digital Pin 3
   - **IN2** → Arduino Digital Pin 4
   - **IN3** → Arduino Digital Pin 5
   - **IN4** → Arduino Digital Pin 6
   - **ENA** → Arduino 5V (or PWM pin if using speed control)
   - **ENB** → Arduino 5V (or PWM pin if using speed control)
   - **Motor A terminals** → Left motor
   - **Motor B terminals** → Right motor
   - **12V Power** → External 12V power supply
   - **GND** → Common ground

5. **Power Supply**:
   - Ensure all grounds are connected.
   - The Arduino can be powered via USB or an external power supply.

## Software

The Arduino Integrated Development Environment (IDE) is used for writing and uploading the code to the Arduino board. The project also uses the VirtualWire library for wireless communication.

## Installation

1. Clone the repository:
   ```sh
   git clone https://github.com/mdfaizaanalam/Gesture-based-robot.git
   cd gesture-control-robotic-car

2. Open the Arduino IDE:
Download and install the Arduino IDE from [here](https://www.arduino.cc/en/software).
Open the transmitter_code.ino and receiver_code.ino files in the Arduino IDE.

Install the required libraries:
3. Install the VirtualWire library from the Arduino Library Manager.
Upload the code provided.

4. Connect your Arduino board to your computer and upload the transmitter_code.ino to the transmitter Arduino and receiver_code.ino to the receiver Arduino.


## Usage
Power the Arduino boards:

Ensure both the transmitter and receiver Arduinos are powered on.
Control the car:

Use hand gestures to control the car's movement. The accelerometer will detect the gestures and send the corresponding signals to the receiver Arduino, which will control the motors accordingly.





This `README.md` file provides a comprehensive overview of your project, including an introduction, features, components, software, installation instructions, usage guidelines, code, and acknowledgments. You can customize the paths, links, and additional details as per your project specifics.
