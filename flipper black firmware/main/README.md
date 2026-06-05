This is just an idea, frimware is not started at all

# Flipper Black Firmware

Custom firmware for Flipper Black - an advanced open-source wireless security research tool based on **ESP32-S3 raw chip**.

## Hardware
- Main MCU: ESP32-S3 (QFN56)
- Sub-GHz: CC1101
- LoRa: SX1262
- NFC/RFID: PN532
- Flash: W25Q128 (16MB)
- Display: 3.5" IPS Touch
- GPIO Expander: MCP23017

## Planned Features
- Multi-protocol RF transmission/reception
- NFC card reading & emulation
- LoRa long-range communication
- Sub-GHz signal replay & analysis
- Touch UI with LVGL
- GPS integration
- IR TX/RX

## Tech Stack
- Framework: **ESP-IDF v5.3+**
- UI: LVGL
- RTOS: FreeRTOS
- Build System: CMake

## Current Status
Minimal framework created. Full implementation in progress.
