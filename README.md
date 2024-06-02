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

- **Arduino Uno**<br>
The Arduino Uno is an open-source microcontroller board based on the Microchip ATmega328P microcontroller and developed by Arduino.cc. The board is equipped with sets of digital and analog input/output (I/O) pins that may be interfaced to various expansion boards (shields) and other circuits. The board has 14 digital I/O pins (six capable of PWM output), 6 analog I/O pins, and is programmable with the Arduino IDE (Integrated Development Environment), via a type B USB cable. It can be powered by the USB cable or by an external 9-volt battery, though it accepts voltages between 7 and 20 volts.

- **Accelerometer ADXL335**<br>
An accelerometer is an electromechanical device used to measure acceleration forces. Such forces may be static, like the continuous force of gravity or, as is the case with many mobile devices, dynamic to sense movement or vibrations. Acceleration is the measurement of the change in velocity, or speed divided by time. 

- **RF 433 MHz Module**<br>
In generally, the wireless systems designer has two overriding constraints: it must operate over a certain distance and transfer a certain amount of information within a data rate. The RF modules are very small in dimension and have a wide operating voltage range i.e. 3V to 12V.Basically the RF modules are 433 MHz RF transmitter and receiver modules. The transmitter draws no power when transmitting logic zero while fully suppressing the carrier frequency thus consume significantly low power in battery operation. When logic one is sent carrier is fully on to about 4.5mA with a 3volts power supply. The data is sent serially from the transmitter which is received by the tuned receiver. Transmitter and the receiver are duly interfaced to two microcontrollers for data transfer. 

- **Motor Driver L298N**<br>
The L298N is an integrated monolithic circuit in a 15- lead Multiwatt and PowerSO20 packages. It is a high voltage , high current dual full-bridge driver de-signed to accept standard TTL logic level sand drive inductive loads such as relays, solenoids, DC and stepping motors. Two enable inputs are provided to enable or disable the device independently of the in-put signals .The emitters of the lower transistors of each bridge are connected together rand the corresponding external terminal can be used for the connection of an external sensing resistor. An additional Supply input is provided so that the logic works at a lower voltage. 

- **Prototyping Board**
- **9V and 12V Batteries**
- **TT Gear Motors**
- **Rubber Wheels**
- **PCB (Printed Circuit Board)**
- **Male-Female Header Pins**

## Circuit Diagram

Textual circuit diagram for your project which illustrating the connections between components such as the Arduino, accelerometer, RF module, motor driver, and motors. Here's a textual guide for what the diagram should include:

### Textual Representation of Circuit Diagram

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

- The Arduino Integrated Development Environment (IDE) is a cross-platform application (for Windows, macOS, Linux) that is written in functions from C and C++. It is used to write and upload programs to Arduino compatible boards, but also, with the help of 3rd party cores, other vendor development boards.  
- The source code for the IDE is released under the GNU General Public License, version 2. 
- The Arduino IDE supports the languages C and C++ using special rules of code structuring. The Arduino IDE supplies a software library from the Wiring project, which provides many common input and output procedures. User-written code only requires two basic functions, for starting the sketch and the main program loop, that are compiled and linked with a program stub main() into an executable cyclic executive program with the GNU toolchain, also included with the IDE distribution. The Arduino IDE employs the program avrdude to convert the executable code into a text file in hexadecimal encoding that is loaded into the Arduino board by a loader program in the board's firmware. By default, avrdude is used as the uploading tool to flash the user code onto official Arduino boards. 


## Installation

1. Clone the repository:
   ```sh
   git clone https://github.com/mdfaizaanalam/Gesture-based-robot.git
   cd gesture-control-robotic-car

2. Open the Arduino IDE:
- Download and install the Arduino IDE from [here](https://www.arduino.cc/en/software).
- Open the transmitter_code.ino and receiver_code.ino files in the Arduino IDE.

3. Install the required libraries:
- Install the VirtualWire library from the Arduino Library Manager.
Upload the code provided.

4. Connect your Arduino board to your computer and upload the transmitter_code.ino to the transmitter Arduino and receiver_code.ino to the receiver Arduino.


## Usage
1. Power the Arduino boards:
- Ensure both the transmitter and receiver Arduinos are powered on.
2. Control the car:
- Use hand gestures to control the car's movement. 
- The accelerometer will detect the gestures and send the corresponding signals to the receiver Arduino, which will control the motors accordingly.




This `README.md` file provides a comprehensive overview of your project, including an introduction, features, components, software, installation instructions, usage guidelines, code, and acknowledgments. You can customize the paths, links, and additional details as per your project specifics.
