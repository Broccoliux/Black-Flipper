# Flipper Black

A custom open-source wireless security research tool built from raw chips on a 4-layer PCB designed in KiCad. No modules. No dev boards. No kits. Every IC hand-placed, every trace manually routed.

Built to outclass the Flipper Zero in hardware — more range, more protocols, faster processor, bigger screen, GPS, LoRa, and WiFi — all on one board, all from scratch.

> Solo build by a 19-year-old from Punjab, Pakistan.

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
| PCB | 4-layer, ENIG finish | JLCPCB fabrication |
| Enclosure | CNC aluminum | Custom designed in Fusion 360 |

**Supporting ICs:** TLV70018 (1.8V LDO for GPS), TXB0102 (level shifter), MCP23017 (GPIO expander), BGA725L6 (GPS LNA), SAFFB1G58KA0F0A (SAW filter), PE4259 (RF switches)

**Total BOM cost: ~$280**

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
| Firmware maturity | Early — architecture done | 3 years of community firmware |

---

## Images

### Assembled Device
![Assembled Flipper Black](imgs/Ahh%20soo%20cool.png)

### Final Design
![Final Design](imgs/final%20design.png)

### Enclosure — Both Sides
![Enclosure Bodies](imgs/both%20bodies.png)

### PCB 3D Render
![PCB 3D Model](imgs/PCB%203D%20model.png)

### Raw PCB Layout
![RAW PCB Layout](imgs/RAW%20design.png)

---

## Why I Built This

Flipper Zero costs $200 and then nickels-and-dimes you for WiFi, better range, GPS — everything interesting. I wanted a single device that does it all, with better hardware, built from actual components instead of modules.

I also wanted to prove I could. This is my third KiCad PCB project. The first was a music-reactive LED board. The second was an 84-key wireless mechanical keyboard with per-key RGB. This is the third — and the hardest.

Every IC on this board was placed by hand. Every trace was routed by me. The enclosure was modeled in Fusion 360 to fit the PCB exactly.

---

## Firmware

**Status: Architecture complete, implementation in progress.**

- Framework: ESP-IDF (C)
- RTOS: FreeRTOS — each module runs as a dedicated task
- UI: LVGL on the 3.5" IPS touchscreen
- Core 0: RF tasks (CC1101, SX1262, PN532)
- Core 1: UI, GPS, WiFi, system logic

Full architecture doc: [`flipper black firmware/`](./flipper%20black%20firmware/)

---

## What It Can Do

- **Sub-GHz scanning** — 300–928MHz capture and replay (CC1101 + PA for extended range)
- **LoRa encrypted chat** — off-grid encrypted messaging up to 10km, zero internet required
- **NFC/RFID** — 13.56MHz read/write/emulate
- **GPS signal logging** — every captured RF signal gets GPS-tagged automatically
- **WiFi** — scanning, packet capture, deauth detection
- **BLE 5.0** — scanning and interaction
- **GPS-aware automation** — device behavior changes based on physical location
- **Dual-core parallel operation** — WiFi scanning and sub-GHz capture simultaneously

---

## How to Use

> Full guides in [`Flipper Black guide pdfs/`](./Flipper%20Black%20guide%20pdfs/)

### Hardware

1. PCB files in `PCB/` — open `.kicad_pro` in KiCad 8+
2. Order from JLCPCB: upload gerbers from `PCB/gerbers/`, select 4-layer, ENIG finish
3. BOM in `BOM/BOM.csv` — order components from LCSC or Mouser
4. Enclosure: `CAD/` contains the `.step` file — send to a CNC shop or modify as needed

### Firmware

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

## Previous Work

This isn't my first PCB.

- **Broccoli Board** — 84-key 75% wireless mechanical keyboard. Custom KiCad PCB, nice!nano V2, ZMK firmware, SK6812 Mini-E per-key RGB. → [github.com/fussdeek-del/Broccoli-board](https://github.com/fussdeek-del/Broccoli-board)
- **The HUD** — Live game stats on your desk. RP2040 + 2.4" TFT, custom KiCad PCB, C++ firmware. → [github.com/fussdeek-del/N-X-H-desktop-Hud](https://github.com/fussdeek-del/N-X-H-desktop-Hud)

---

## Built By

**broccoli 🥦** — solo hardware builder, Punjab, Pakistan.  
Hack Club Fallout — Burnout Track
