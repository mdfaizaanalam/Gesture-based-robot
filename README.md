# Gesture-based-robot

This project demonstrates a gesture-controlled robotic car using Arduino, accelerometer, RF module, and motor driver. The car can be controlled by hand gestures through the accelerometer, and it can be further extended to be controlled by an Android-based mobile application with different modes (e.g., touch buttons mode, voice recognition mode). An automatic obstacle detection system is also implemented for improved safety.

## Table of Contents

- [Introduction]
- [Features]
- [Components]
- [Circuit Diagram]
- [Software]
- [Installation]
- [Usage](#usage)
- [Acknowledgments](#acknowledgments)

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

![Circuit Diagram](path/to/circuit_diagram.png)  <!-- Add the path to your circuit diagram image -->

## Software

The Arduino Integrated Development Environment (IDE) is used for writing and uploading the code to the Arduino board. The project also uses the VirtualWire library for wireless communication.

## Installation

1. Clone the repository:
   ```sh
   git clone https://github.com/mdfaizaanalam/Gesture-based-robot.git
   cd gesture-control-robotic-car

2. Open the Arduino IDE:
Download and install the Arduino IDE from here.
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
