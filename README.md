![ESP32-S3](https://img.shields.io/badge/MCU-ESP32--S3-red?style=flat-square)
![CC1101](https://img.shields.io/badge/Sub--GHz-CC1101%20%2B%20PA-orange?style=flat-square)
![SX1262](https://img.shields.io/badge/LoRa-SX1262%2010km-blue?style=flat-square)
![PN532](https://img.shields.io/badge/NFC-PN532-green?style=flat-square)
![GPS](https://img.shields.io/badge/GPS-MAX--M8Q-brightgreen?style=flat-square)
![KiCad](https://img.shields.io/badge/PCB-KiCad%2010-blue?style=flat-square)
![4-Layer](https://img.shields.io/badge/Layers-4--Layer%20ENIG-yellow?style=flat-square)
![License](https://img.shields.io/badge/License-MIT-lightgrey?style=flat-square)

# Zine

[📖 View the Project Zine](./ZINE.pdf)

---

# Flipper Black

A custom open-source wireless hacking tool inspired by Flipper Zero, but designed with significantly more flexibility and power. Built on a 4-layer PCB and designed entirely in KiCad, it uses no modules—only bare ICs—with every trace routed by hand.

Designed to outperform Flipper Zero in many hardware aspects, including range, protocol support, processing power, display size, touchscreen capability, GPS, LoRa, and Wi-Fi integration. The only thing still missing is a strong firmware team to unlock its full potential.

# Why I Built This

If I'm being honest, this started as a hobby and quickly became a passion. I genuinely enjoy working on projects like this and wanted to build something that would challenge my skills and push my knowledge further.

I also wanted a Flipper Zero, but instead of buying one, I decided to build my own version from scratch. This project became an opportunity to learn, improve, and create something unique. It also serves as a major personal project that reflects my engineering abilities and ambitions.

---

## Gallery

### CAD & Assembly

| | |
|:---:|:---:|
| ![Assembled Device](imgs/Ahh%20soo%20cool.png) | ![Final Design](imgs/final%20design.png) |
| Fully assembled device with 5 antennas and front panel | Closed enclosure, final form factor |

| |
|:---:|
| ![Enclosure Bodies](imgs/both%20bodies.png) |
| CNC aluminum enclosure - top and bottom halves |

### PCB

| | |
|:---:|:---:|
| ![PCB 3D Model](imgs/PCB%203D%20model.png) | ![RAW Design](imgs/RAW%20design.png) |
| PCB 3D render with components placed | Enclosure CAD bare shell |

---

## Features

- 4-layer PCB designed from scratch in KiCad 10, fabricated by JLCPCB with ENIG finish
- ESP32-S3 QFN56 bare IC - 240 MHz dual-core MCU, no development board used
- Wi-Fi 802.11 b/g/n built in - no add-on required
- BLE 5.0 - scanning and interaction
- CC1101 raw chip + PA amplifier - Sub-GHz 300–928 MHz, extended range over stock Flipper
- SX1262 raw chip - LoRa communication up to 10 km
- PN532 raw chip - NFC/RFID 13.56 MHz full stack, read/write/emulate
- MAX-M8Q raw chip - Multi-constellation GPS (GPS + GLONASS + Galileo + BeiDou)
- GPS-tagged signal logging - every captured RF signal is stamped with location automatically
- GPS-aware automation - device behavior changes based on physical location
- Dual-core parallel operation - Wi-Fi and Sub-GHz scanning run simultaneously on separate cores
- Waveshare 3.5" IPS capacitive touchscreen (ST7796S + FT6336U)
- W25Q128 - 16 MB SPI flash
- MicroSD card slot - external storage for captures and logs
- TP4056 + DW01A + AP2112K - LiPo charging, protection, and regulation
- TLV70018 1.8V LDO for GPS rail
- TXB0102 level shifter for mixed-voltage I/O
- MCP23017 GPIO expander
- BGA725L6 GPS LNA + SAFFFB1G8KA0F0A SAW filter for a clean GPS receive chain
- PE4259 RF switch for antenna routing
- CNC aluminum enclosure custom-designed in Fusion 360
- Firmware based on ESP-IDF (C) + FreeRTOS
- LVGL UI running on the touchscreen
- **Estimated BOM Cost:** $280–$350

**Not Supported Yet:** 125 kHz RFID and iButton/1-Wire were removed to save GPIOs.

Firmware development has not started yet. I plan to begin after July 10, once my exams are finished. I may also build a team to help with firmware development.

---

## What's Inside

| Component | Part | Specification |
|---|---|---|
| MCU | ESP32-S3 QFN56 | 240 MHz dual-core, Wi-Fi + BLE 5.0 |
| Sub-GHz Radio | CC1101 + PA Amplifier | 300–928 MHz, extended range |
| LoRa | SX1262 | Up to 10 km range |
| NFC/RFID | PN532 | 13.56 MHz full stack |
| GPS | MAX-M8Q | GPS + GLONASS + Galileo + BeiDou |
| Flash | W25Q128 | 16 MB SPI |
| Display | Waveshare 3.5" IPS | ST7796S + FT6336U capacitive touch |
| Storage | MicroSD Slot | — |
| Power | TP4056 + DW01A + AP2112K | LiPo charging and protection |
| PCB | 4-layer PCB | JLCPCB fabrication |
| Enclosure | CNC Aluminum | Custom designed in Fusion 360 |

**Supporting ICs:** TLV70018 (1.8V GPS LDO), TXB0102 (Level Shifter), MCP23017 (GPIO Expander), BGA725L6 (GPS LNA), SAFFFB1G8KA0F0A (SAW Filter), PE4259 (RF Switch)

---

## Flipper Black vs Flipper Zero

| Feature | Flipper Black | Flipper Zero |
|---|---|---|
| CPU | ESP32-S3 @ 240 MHz Dual-Core | STM32WB55 @ 64 MHz Single-Core |
| Wi-Fi | Built-in | Add-on Required |
| BLE | 5.0 | 4.2 |
| Sub-GHz | CC1101 + PA Amplifier | CC1101 |
| LoRa | SX1262, up to 10 km | Not Available |
| NFC | PN532 13.56 MHz | Yes |
| 125 kHz RFID | No | Yes |
| GPS | MAX-M8Q Multi-Constellation | Not Available |
| Display | 3.5" Color IPS Capacitive Touch | 1.4" Monochrome |
| Firmware Maturity | Not Started | Mature Ecosystem |

---

## Firmware

**Status:** ZZZZZZZZZZZZZZZZZZZZ

- Framework: ESP-IDF (C)
- RTOS: FreeRTOS
- UI: LVGL on the 3.5" IPS touchscreen
- Core 0: RF tasks (CC1101, SX1262, PN532)
- Core 1: UI, GPS, Wi-Fi, and system logic

Full architecture document: [`flipper black firmware/`](./flipper%20black%20firmware/)

---

## How to Use

### Hardware

1. PCB files are located in `PCB/`
2. Open the `.kicad_pro` file in KiCad 8+
3. Upload Gerbers from `PCB/gerbers/` to JLCPCB
4. Order components using `BOM/BOM.csv`
5. The enclosure STEP file is available in `CAD/`

### Firmware (Planned Architecture)

1. Install ESP-IDF v5.x
2. Clone the repository

```bash
git clone https://github.com/fussdeek-del/Black-Flipper
```

3. Navigate to the firmware folder

4. Build

```bash
idf.py build
```

5. Flash

```bash
idf.py -p PORT flash
```

> Firmware is under active planning and development. Check the architecture documentation before contributing.

---

## Repository Structure

```text
Flipper-Black/
├── PCB/                        # KiCad project + Gerbers
├── CAD/                        # Fusion 360 enclosure (.step)
├── flipper black firmware/     # ESP-IDF firmware + architecture
├── Flipper Black guide pdfs/   # Documentation and guides
├── imgs/                       # Photos and renders
├── BOM/                        # Bill of Materials
└── README.md
```

---

## Built By

**broccoli 🥦** — Solo hardware builder from Pakistan.

*Chasing what I love.*

Hack Club Fallout
