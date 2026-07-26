![ESP32-S3](https://img.shields.io/badge/MCU-ESP32--S3-red?style=flat-square)
![CC1101](https://img.shields.io/badge/Sub--GHz-CC1101%20%2B%20PA-orange?style=flat-square)
![SX1262](https://img.shields.io/badge/LoRa-SX1262%2010km-blue?style=flat-square)
![PN532](https://img.shields.io/badge/NFC-PN532-green?style=flat-square)
![GPS](https://img.shields.io/badge/GPS-MAX--M8Q-brightgreen?style=flat-square)
![KiCad](https://img.shields.io/badge/PCB-KiCad%2010-blue?style=flat-square)
![4-Layer](https://img.shields.io/badge/Layers-4--Layer%20ENIG-yellow?style=flat-square)
![License](https://img.shields.io/badge/License-MIT-lightgrey?style=flat-square)

# FLIPPER BLACK

Flipper black is custom made hacking tool, it can out perfrom flipper Zero in almost every aspect. it have better and larger dsplay and have more power and range then flipper zero.

# Wht i built this

I wanted a flipper zero but when i researched about it. i found out that just buying a Flipper Zero is almost useless, to unlock its full power we need to spend more $$, so i decided to build my own with everything in it, no external attachments needed.

# Zine

[![zine Preview](imgs/ZINE.png)](./ZINE.pdf)

### CAD n Assembly

![Assembled Device](imgs/Ahh%20soo%20cool.png)

### PCB

![PCB 3D Model](imgs/PCB%203D%20model.png)

### Assembly

1. place the PCB in the enclosure.
2. secure the PCB with M2 screws.
3. Connect the display to FPC connector.
4. connect the antenna at top.
5. close with top enclosure and secure with screws.

## Features

- 4 layer PCB
- only ICs no modules used.
- Wi-Fi 802.11 built in
- BLE 5.0
- CC1101
- PN532
- MAX-M8Q
- Waveshare 3.5" IPS capacitive touchscreen
- W25Q128
- MicroSD
- TP4056
- TLV70018
- TXB0102
- Firmware based on ESP-IDF
- **Estimated BOM Cost:** $280–$350

## Firmware

**Status:** linked as a submodule

- Firmware is maintained in a differnt repository: https://github.com/fussdeek-del/Black-Flipper-firmware
- 
- The firmware repository is included here as a git submodule at `external/firmware`.

To initialize the submodule locally after cloning:

```bash
git clone https://github.com/fussdeek-del/Black-Flipper
cd Black-Flipper
git checkout integrate/firmware-submodule-fix
git submodule update --init --recursive
```


To build the firmware (see the firmware repo):
> Firmware is under development and planning.


```bash
cd external/firmware
idf.py build
```
