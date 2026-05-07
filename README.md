# Smart Parking System using IoT

An IoT-enabled smart parking management system developed using Arduino Uno, IR sensors, Servo Motor, LCD Display, ESP8266 Wi-Fi Module, and ThingSpeak cloud platform for real-time parking occupancy monitoring.

## Project Overview
This project helps automate parking management by detecting available parking slots in real-time and updating occupancy data to the cloud. It improves parking efficiency, reduces manual monitoring, and enables scalable smart parking infrastructure.

## Features
- Real-time parking slot detection
- 4 parking slots monitoring
- Automatic gate opening using Servo Motor
- LCD displays available parking slots
- LED indication for slot occupancy
- Cloud dashboard monitoring using ThingSpeak
- Hardware prototype + simulation implementation
- Low-cost scalable IoT solution

## Hardware Used
- Arduino Uno
- 4 IR Sensors (slot detection)
- 1 IR Sensor (gate detection)
- Servo Motor
- 16x2 LCD Display
- LEDs
- ESP8266 Wi-Fi Module
- Jumper wires
- Breadboard
- Power Supply

## Working Principle
1. Vehicle enters parking area.
2. Gate IR sensor detects vehicle.
3. Servo motor opens gate automatically.
4. Slot IR sensors monitor occupancy.
5. Available slot count is calculated.
6. LCD updates available parking slots.
7. ESP8266 sends data to ThingSpeak cloud.
8. Admin can monitor parking occupancy remotely.

## Cloud Integration
ThingSpeak fields:
- Field 1 → Available Slots
- Field 2 → Occupied Slots
- Field 3 → Gate Status

## Future Scope
- Mobile application integration
- Number plate recognition
- Online slot booking
- Payment gateway integration
- AI-based parking analytics

## Tech Stack
Arduino IDE | Embedded C | IoT | Sensors | ThingSpeak | Embedded Systems

## Author
Atharv Saxena
