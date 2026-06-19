# Line Follower Robot

An Arduino-based line follower robot that uses infrared sensors to detect and follow a predefined path automatically.

## Features

* Automatic line tracking
* Real-time path correction
* Differential drive control
* Simple and efficient navigation

## Hardware Components

* Arduino Uno
* L298N Motor Driver
* 2 IR Sensors
* 2 DC Motors
* Robot Chassis
* Battery Pack

## Pin Connections

| Component       | Arduino Pin |
| --------------- | ----------- |
| Left IR Sensor  | D2          |
| Right IR Sensor | D3          |
| ENA             | D5          |
| ENB             | D6          |
| IN1             | D8          |
| IN2             | D9          |
| IN3             | D10         |
| IN4             | D11         |

## Working Principle

The IR sensors detect the black line on a light surface. Based on the sensor readings, the Arduino adjusts the motor speeds and directions to keep the robot aligned with the path.

## Author

Ahmed Hesham
