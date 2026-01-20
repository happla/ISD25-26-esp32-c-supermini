# ISD25-26-esp32-c-supermini project
This project is for the ESP32-C3 Super Mini board for ISD 2025–26.<br>
Planned sensors: SPS30 and BME690 (not yet implemented).<br>
I²C pins are GPIO8 (SDA) and GPIO9 (SCL), shared with sensors.<br>
You can verify pin connections from the **backside of the board**.<br>
**Read the specs before starting.**<br>

Jump to sections:
- [Technical Specs](#technical-specs) 
- [Requirements](#requirements)  
- [Pin Reference](#pin-reference-esp32-c3-super-mini)  
- [Quick Start](#quick-start)

## Technical specs

Full board specs:(https://www.espboards.dev/esp32/esp32-c3-super-mini/)

## Requirements
Software

To use ESP-IDF with your ESP32:<br>
1.Build tools – CMake and Ninja to build full applications. <br>
2. ESP-IDF – contains APIs (libraries + source code) and scripts to operate the toolchain. <br>

Reference: (https://docs.espressif.com/projects/esp-idf/en/stable/esp32/get-started/index.html)

## Pin reference esp32 c3 super mini
Blue onboard LED: GPIO8 (also connected to SDA, it didn't work for me -hp.)<br>
I²C: SDA → GPIO8, SCL → GPIO9 (shared with sensors).<br>
Check the backside of the board for exact pin layout.<br>
<img src="https://github.com/happla/ISD25-26-esp32-c-supermini/blob/main/pictures/pinreference.png" width= "100%" height = "100%">

## Quick Start
Follow these steps to build, flash, and monitor your ESP32-C3 Super Mini:
1.Set up ESP-IDF environment:
```
cd ~/esp/esp-idf
source export.sh
```

2.Go to your project folder

3. Set ESP32-C3 as a target, clean (optional) and build
```
idf.py set-target esp32c3
idf.py fullclean
idf.py build
```
4.Flash firmware and monitor to the esp using port or other way
option a:
```
idf.py -p PORT flash monitor
```

option b (auto-detect):
```
idf.py flash monitor
```

[Back to top](#isd25-26-esp32-c-supermini-project)


