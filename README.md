![ESP32-S3](https://img.shields.io/badge/MCU-ESP32--S3-red?style=flat-square)
![cc1101](https://img.shields.io/badge/Sub--GHz-CC1101%20%2B%20PA-orange?style=flat-square)
![SX1262](https://img.shields.io/badge/LoRa-SX1262%2010km-blue?style=flat-square)
![PN532](https://img.shields.io/badge/NFC-PN532-green?style=flat-square)
![GPS](https://img.shields.io/badge/GPS-MAX--M8Q-brightgreen?style=flat-square)
![KIKAD](https://img.shields.io/badge/PCB-KiCad%2010-blue?style=flat-square)
![4-Layer](https://img.shields.io/badge/Layers-4--Layer%20ENIG-yellow?style=flat-square)
![License](https://img.shields.io/badge/License-MIT-lightgrey?style=flat-square)

# Flipper Black

A custom open souurce wireless hacking tool, similar concept as Flipper zero but with 100X more flexibilty and power full, built on 4 layer PCB , designed in KICAD, no modules only raae CHIPS, every trace routed by hand. 

built to outclass Flipper Zero in alomost every aspect, this is better then in hardware, range, more protocols, faster processor, bigger and touch screen, GPS, LORA, and wifi all on one board all from scratch. the only things i need is a good team to make a best frimware.

# why i built this
if i be real this is my new passion and a hobby, now i start having fun in these, and i wanted to build something that will check my expertise, and also i need a flipper zero, then i had a chance so i built it. Also i want to go to MIT so this might help alot.

---

## Gallery

### CAD & Assembly

| | |
|:---:|:---:|
| ![Assembled Device](imgs/Ahh%20soo%20cool.png) | ![Final Design](imgs/final%20design.png) |
| Fully assembled device 5 antennas, front panel | Closed enclosure, final form factor |

| |
|:---:|
| ![Enclosure Bodies](imgs/both%20bodies.png) |
| CNC aluminum enclosure - top and bottom halves |

### PCB

| | |
|:---:|:---:|
| ![PCB 3D Model](imgs/PCB%203D%20model.png) | ![RAW Design](imgs/RAW%20design.png) |
| PCB 3D render components placed | Enclosure CAD bare shell |

---

## Feature
- 4-layer PCB designed from scratch in KiCad 10, fabricated by JLCPCB with ENIG finish
- ESP32 S3 QFN56 bare die - 240MHz dual-core, no dev board, directs chip placment
- WiFi 802.11 b/g/n built in - no addon required
- BLE 5.0 - scanning and interaction
- CC1101 raw chip + PA amplifier - sub-GHz 300-928MHz, extended range over stock Fliiper
- SX1262 raw chip - Lora up 10km, off grid encrypted text with zero infrastructure
- PN532 raw chip - NFC/RFID 13.56 full stack, read/write/emulate
- MAX-M8Q raw chip - multi-constellation GPS (GPS + GLONASS + Galilio + beiDuo)
- GPS tagged signal logging - every captured RF signal stamped with location automatically
- GPS-aware automation - device behavior changes based on physical location
- dual-core parallel operation - WiFi and sub-GHz scanning run simutaneosly on seprate cores
- WaveShare 3.5" IPS capacitive touchscreen (ST7796S + FT6336U) - full colour vs Flipper 1.4" monochrome
- W25Q128 - 16MB SPI flash
- MicroSD card slot - external stroage for capture and logs
- TP4056 + GW01A + AP2112K - LiPo charging, cell protection and clean regulation
- TLV70018 1.8v LDO for GPS rail
- TXB0102 level shifter for mixed voltage IO
- MCP23017 GPIO extender
- BGA725L6 GPS LNA + SAFFFB1G8KA0F0A SAW filter - clean GPS receive chain
- PE4259 RF switch for antenna routing
- CNC aluminum enclosure - custom modeled in Fusion 360 to fit PCB exactly
- Firmware on ESP-IDF (C) + Free RTOS - dedicated tasks
- LVGL UI on the touch screen
- # Total estimate for BOM = $280-$350

**Not Supported (yet):** 125KHz RFID and iButton/1-Wire were cut to save GPIOs.
Frimware is not done at all, its not even started yet, i have to give sometime on learing and i might need a team for it too. i will do that after july 10, when my exams will finish.

---

## What's Inside
| Component | Part | Spec |
|---|---|---|
| MCU | ESP32-S3 QFN56 | 240MHz dual-core, WiFi + BLE 5.0 |
| Sub-GHz Radio | CC1101 + PA amp | 300–928MHz, extended range |
| LoRa | SX1262 | Up to 10km range |
| NFC/RFID | PN532 | 13.56MHz full stack |
| GPS | MAX-M8Q | GPS + GLONASS + Galileo + BeiDou |
| Flash | W25Q128 | 16MB SPI |
| Display | Waveshare 3.5" IPS | ST7796S + FT6336U capacitive touch |
| Storage | MicroSD slot | — |
| Power | TP4056 + DW01A + AP2112K | LiPo charge + protection + regulation |
| PCB | 4-layer, PCBA | JLCPCB fabrication |
| Enclosure | CNC aluminum | Custom designed in Fusion 360 |

**Supporting ICs:** TLV70018 (1.8V LDO FOR GPS), TXB0102 (Level Shifter), MCP23017 (GPIO expander), BGA725L6 (GPS LNA), SAFFB1G58KA0F0A (SAW Filter), PE4259 (RF switches)

---

## Flipper Black vs Flipper Zero

| Feature | Flipper Black | Flipper Zero |
|---|---|---|
| CPU | ESP32-S3 @ 240MHz dual-core | STM32WB55 @ 64MHz single-core |
| WiFi | Built-in | Paid addon required |
| BLE | 5.0 | 4.2 |
| Sub-GHz | CC1101 + PA (extended range) | CC1101 stock |
| LoRa | SX1262, up to 10km | Not available |
| NFC | PN532 13.56MHz | Yes |
| 125kHz RFID | No (GPIO constraint) | Yes |
| GPS | MAX-M8Q multi-constellation | Not available |
| Display | 3.5" color IPS capacitive touch | 1.4" monochrome |
| Firmware maturity | Not done at all | 3 years of community firmware |

---

## Firmware

**Status: ZZZZZZZZZZZZZZZZZZZZ **

- Framework: ESP-IDF (C)
- RTOS: FreeRTOS - each module runs as a dedicated task
- UI: LVGL on the 3.5" IPS touchscreen
- Core 0: RF tasks (CC1101, SX1262, PN532)
- Core 1: UI, GPS, WiFi, system logic

Full architecture doc: [`flipper black firmware/`](./flipper%20black%20firmware/)

---

## How to Use

### Hardware

1. PCB files in `PCB/` - open `.kicad_pro` in KiCad 8+
2. Order from JLCPCB: upload gerbers from `PCB/gerbers/`, select 4-layer
3. BOM in `BOM/BOM.csv` - order components from LCSC or anyware else
4. Enclosure: `CAD/` contains the `.step` file - send to a CNC shop or modify as needed

### Firmware (Expected Aricitacture)

1. Install ESP-IDF v5.x
2. Clone repo:
```
   git clone https://github.com/fussdeek-del/Black-Flipper
```
3. Navigate to firmware folder
4. Build:
```
   idf.py build
```
5. Flash:
```
   idf.py -p PORT flash
```

> Firmware is under active development. Check the architecture doc before contributing.

---

## Repo Structure

```
Flipper-Black/
├── PCB/                        # KiCad project + gerbers
├── CAD/                        # Fusion 360 enclosure (.step)
├── flipper black firmware/     # ESP-IDF firmware + architecture
├── Flipper Black guide pdfs/   # Usage guides
├── imgs/                       # Photos and renders
├── BOM/                        # Bill of materials
└── README.md
```

---

## Built By

**broccoli 🥦** - solo hardware builder, Pakistan.  # Chasing what i love.
to the MIT inshaallah
Hack Club Fallout
