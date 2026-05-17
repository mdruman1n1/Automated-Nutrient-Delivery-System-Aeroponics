# Automated Nutrient Delivery System for Aeroponics

## Overview

This project presents a low-cost IoT-enabled Automated Nutrient Delivery System for Aeroponics using ESP32 microcontroller technology, adaptive PID control, real-time environmental monitoring, and cloud-based data logging.

The system was developed as part of a dissertation project focused on improving precision agriculture, sustainable farming, and resource-efficient food production using smart automation technologies.

The project integrates sensors, automated pumps, misting systems, and wireless monitoring to maintain optimal nutrient and environmental conditions for plant growth.

---

# Objectives

- Develop a low-cost automated aeroponic nutrient delivery system
- Monitor pH, EC, temperature, humidity, and VPD in real time
- Implement adaptive PID-based nutrient control
- Improve energy efficiency and water conservation
- Enable IoT cloud monitoring using ESP32 and ThingSpeak
- Reduce maintenance and improve system reliability

---

# Features

## Real-Time Monitoring
- pH Monitoring
- Electrical Conductivity (EC) Monitoring
- Temperature Monitoring
- Humidity Monitoring
- Vapor Pressure Deficit (VPD) Monitoring

## Automation
- Automated nutrient dosing
- Automated misting control
- PID-based adaptive feedback control
- Automatic safety alerts

## IoT Integration
- WiFi-enabled ESP32 communication
- Cloud-based data logging
- Remote monitoring dashboard
- Real-time sensor updates

## Sustainability
- Low energy consumption
- Reduced water usage
- Closed-loop nutrient delivery
- Low-cost design for academic and hobbyist applications

---

# Hardware Components

| Component | Description |
|----------|-------------|
| ESP32-WROVER | Main microcontroller |
| Atlas Scientific EZO-pH Sensor | pH monitoring |
| DFRobot EC Sensor | Nutrient concentration monitoring |
| DHT22 Sensor | Temperature and humidity monitoring |
| Peristaltic Pump | Nutrient dosing |
| Water Pump | Misting system |
| Relay Module | Pump control |
| Solenoid Valve | Mist flow control |
| SMPS Power Supply | System power |

---

# Software & Technologies

- Arduino IDE
- ESP32 Programming
- PID Control Algorithm
- ThingSpeak IoT Platform
- WiFi Communication
- Embedded C/C++
- Cloud Data Logging

---

# System Architecture

The system is divided into three main layers:

## 1. Physical Layer
Includes sensors, pumps, misting nozzles, relays, and actuators responsible for nutrient delivery and environmental monitoring.

## 2. Control Layer
Uses ESP32 microcontroller with PID control algorithms for automated decision-making and adaptive nutrient regulation.

## 3. Cloud Layer
Provides IoT connectivity through ThingSpeak for remote monitoring, real-time visualization, and data logging.

---

# Working Principle

1. Sensors continuously monitor pH, EC, temperature, humidity, and VPD.
2. ESP32 processes sensor data in real time.
3. PID control logic adjusts nutrient dosing and misting cycles automatically.
4. Relay modules activate pumps and solenoid valves.
5. Sensor data is uploaded to the cloud using WiFi.
6. Users can monitor the system remotely through the IoT dashboard.

---

# Circuit Diagram

The complete circuit diagram for the project includes:

- ESP32 microcontroller
- pH sensor connections
- EC sensor connections
- Relay module wiring
- Pump control system
- Power supply configuration
- IoT communication setup

---

# Experimental Results

The developed system achieved:

- ±0.1 pH accuracy
- ±5% EC accuracy
- <2 second response time
- 90% lower energy consumption
- 95% water savings
- Reduced maintenance requirements
- Stable 500-hour continuous operation

---

# Advantages

- Low-cost implementation
- High precision nutrient control
- Energy efficient operation
- Scalable architecture
- Suitable for urban farming
- Ideal for academic research
- Supports sustainable agriculture

---

# Future Improvements

Future development may include:

- Machine learning optimization
- AI-based predictive control
- Mobile application integration
- Solar-powered operation
- MQTT communication
- Camera-based plant monitoring
- Automatic nutrient mixing
- Blockchain-based agricultural data systems

---

# Installation

## Arduino IDE Setup

1. Install Arduino IDE
2. Install ESP32 Board Package
3. Install required libraries:
   - WiFi.h
   - HTTPClient.h
   - DHT.h
   - PID_v1.h
