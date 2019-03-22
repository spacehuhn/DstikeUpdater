# DstikeUpdater
ESP32 OLED SD Updater Library for DSTIKE Boards

## Supported Devices

This library is made for the **DSTIKE D-duino-32 Final** and **DSTIKE ESP32 Watch DevKit OLED**.  

But it can also run on other boards that fulfill these requirements:  
- ESP32 Chip
- OLED display (SSD1306 or SH1106) with 128x64 pixel
- Up, down and select buttons as [input pullup](https://www.arduino.cc/en/Tutorial/InputPullupSerial)
- SD card slot connected to the SD/MMC pins (check [this example](https://github.com/espressif/arduino-esp32/blob/master/libraries/SD_MMC/examples/SDMMC_Test/SDMMC_Test.ino))

## Installation

1) Click [Download Zip](https://github.com/spacehuhn/DstikeUpdater/archive/master.zip) to download the source code from GitHub.  
2) Unzip and rename the Folder name to "DstikeUpdater".  
3) Paste it in your library folder (usually located somewhere at documents/Arduino/libraries).  
4) Restart the Arduino IDE.  

5) Install the OLED library using the same steps, from [ThingPulse/esp8266-oled-ssd1306](https://github.com/ThingPulse/esp8266-oled-ssd1306)

## Usage

1) Include the library `#include <DstikeUpdater.h>`
2) In the begin of `void setup()` add `DstikeUpdater::run()`

Example DSTIKE D-duino-32 Final:   
```c++
#include <SH1106Wire.h> // Inlucde OLED library
#include <DstikeUpdater.h> // Inlcude updater library

// Pin definitions
#define BUTTON_UP 32
#define BUTTON_DOWN 25
#define BUTTON_SELECT 33
#define OLED_SDA 26
#define OLED_SCK 27

// Create display
SH1106Wire display(0x3c, OLED_SDA, OLED_SCK);

void setup() {
    // Run updater
    DstikeUpdater::run(display, BUTTON_UP, BUTTON_DOWN, BUTTON_SELECT /*,UPDATER_PATH, LOADING_DELAY*/);
    
    // ...
}

void loop() {
    // ...
}
```

Example DSTIKE ESP32 DevKit OLED (different pin definitions):   
```c++
#include <SH1106Wire.h> // Inlucde OLED library
#include <DstikeUpdater.h> // Inlcude updater library

// Pin definitions
#define BUTTON_UP 19
#define BUTTON_DOWN 5
#define BUTTON_SELECT 18
#define OLED_SDA 17
#define OLED_SCK 16

// Create display
SH1106Wire display(0x3c, OLED_SDA, OLED_SCK);

void setup() {
    // Run updater
    DstikeUpdater::run(display, BUTTON_UP, BUTTON_DOWN, BUTTON_SELECT /*,UPDATER_PATH, LOADING_DELAY*/);
    
    // ...
}

void loop() {
    // ...
}
```

## License

This software is licensed under the MIT License. See the [license file](LICENSE) for details.  
