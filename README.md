# Flipper Black 🖤

> A custom-built, open-source wireless security research tool that outclasses Flipper Zero in every spec. Built solo from scratch.

![Final Design](final%20design.png)

---

## What is Flipper Black?

Flipper Black is a handheld wireless security research device built entirely from raw chips and a custom PCB. No modules. No kits. No shortcuts. Every chip is placed directly on a 4-layer custom PCB designed in KiCad, fabricated at JLCPCB, with firmware built on ESP-IDF.

It is inspired by Flipper Zero but outclasses it in every hardware specification — adding WiFi, LoRa 10km range, GPS signal logging, a 3.5" color IPS touchscreen, and a significantly more powerful dual-core MCU. Features Flipper Zero literally cannot do even with addons.

---

## Why I built it

Flipper Zero costs $169, has a 400+ person team behind it, and still lacks WiFi, SDR, LoRa, and GPS. I wanted to build something more powerful, fully open source, and designed from scratch by one person. I also wanted to prove that a solo teenage builder in Pakistan could design and ship hardware that competes with a commercial product built by a funded company.

This was built for Hack Club Fallout — Burnout track.

---

## What it can do

| Feature | Flipper Black | Flipper Zero |
|---|---|---|
| Sub-GHz 300-928MHz | ✅ CC1101 + PA amplifier | ✅ CC1101 basic |
| NFC / RFID 13.56MHz | ✅ PN532 full stack | ✅ Basic NFC |
| Infrared TX/RX | ✅ High power array | ✅ Standard |
| Bad USB | ✅ | ✅ |
| WiFi 2.4GHz | ✅ Built in | ❌ Needs addon |
| LoRa 10km range | ✅ SX1276 | ❌ Not available |
| GPS multi-constellation | ✅ MAX-M8Q | ❌ Not available |
| BLE | ✅ BLE 5.0 | ✅ BLE 4.2 |
| Display | ✅ 3.5" color IPS touch | ❌ 1.4" monochrome |
| MCU | ✅ 240MHz dual core | ❌ 64MHz single core |
| Battery | ✅ 2500-3000mAh | ❌ 2000mAh |
| SD Card | ✅ MicroSD slot | ✅ MicroSD slot |
| Enclosure | ✅ CNC aluminum | ✅ Plastic |

**Unique capabilities no other handheld tool has:**
- GPS-tagged signal logging — every captured RF signal stamped with exact coordinates
- LoRa encrypted text chat up to 10km with zero internet or phone network
- WiFi + sub-GHz scanning simultaneously using dual-core ESP32-S3
- Full color touchscreen UI with waveform visualization

---

## How to use it

1. Power on — main menu appears on 3.5" touchscreen
2. Navigate using touch or physical buttons
3. Select any module — Sub-GHz, NFC, IR, WiFi, BLE, LoRa, GPS
4. Sub-GHz: point at any remote or sensor, press capture, signal is recorded and GPS-tagged automatically
5. NFC: hold near any card, press read, card data displays on screen. Press clone to write to blank card.
6. LoRa chat: open chat app, type message on touchscreen keyboard, send — reaches another Flipper Black up to 10km away with no infrastructure
7. All captured data saved to microSD card

---

## Hardware

### Key components
- **MCU:** ESP32-S3 QFN56 bare die — 240MHz dual core, WiFi + BLE 5.0
- **Sub-GHz:** CC1101 + PA amplifier — 300-928MHz
- **LoRa:** SX1276 — 137-1020MHz, up to 10km range
- **NFC/RFID:** PN532 full stack — 13.56MHz
- **GPS:** MAX-M8Q — GPS + GLONASS + Galileo + BeiDou
- **Flash:** W25Q128 — 16MB SPI NOR flash
- **Display:** Waveshare 3.5" IPS capacitive touchscreen — ST7796S + FT6336U touch
- **Storage:** MicroSD card slot
- **Power:** TP4056 + DW01A + AP2112K — LiPo charging, protection, regulation
- **PCB:** 4-layer custom, JLCPCB fabrication, ENIG finish

### PCB
![PCB 3D Model](PCB%203D%20model.png)
![RAW Design](RAW%20design.png)

### Enclosure
![Both Bodies](both%20bodies.png)
![Ahh Soo Cool](Ahh%20soo%20cool.png)

---

## Firmware

Firmware is built on ESP-IDF framework in C. Architecture uses FreeRTOS with separate tasks per module running concurrently on both cores.

Full firmware architecture and structure is in `/firmware/architecture/`.

Active development — contributions welcome.

---

## BOM

Full BOM with part numbers, suppliers, and links in `/BOM/BOM.csv`

Total estimated cost: **~$280**

---

## Zine page

![Zine](zine.png)

---

## Built by

**broccoli 🥦** — age 19, Punjab, Pakistan

Solo build. Designed entirely from scratch in KiCad. No AI-generated designs. No copied tutorials.

[github.com/fussdeek-del/Black-Flipper](https://github.com/fussdeek-del/Black-Flipper)

---

## License

MIT License — open source, build your own.
