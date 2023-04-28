| Supported Targets | ESP32 | ESP32-C2 | ESP32-C3 | ESP32-C6 | ESP32-H2 | ESP32-S2 | ESP32-S3 |
| ----------------- | ----- | -------- | -------- | -------- | -------- | -------- | -------- |

# _Esp32 LED control over WebServer_
This project makes use of a WebServer based on the ESP32 to control the LED connected to the ESP32 
In order to do so we need to connect the ESP32 to the local WiFi network. 

## How to use example
To run just execute the following command while being inside the project's folder `idf.py flash monitor`

## Example folder contents

The project **ESP32 LedCtrl OverWebServer** contains otwo source files in C language [main.c](main/main.c) and [wifiSetUp.c] (main/wifiSetUp.c). The files are located in folder [main](main). It also contains a header file [wifiSetUp.h](main/wifiSetUp.h) that is used to give access of the wifiSetUp.c functions the to main.c file.

ESP-IDF projects are built using CMake. The project build configuration is contained in `CMakeLists.txt`
files that provide set of directives and instructions describing the project's source files and targets
(executable, library, or both). 

Below is short explanation of remaining files in the project folder.

```
├── CMakeLists.txt
├── main
│   ├── CMakeLists.txt
│   └── main.c
│   └── wifiSetUP.c
│   └── wifiSetUP.h
│   └── Kconfig.projbuild      File to add the option to change the SSID and Password through configuration file
└── README.md                  This is the file you are currently reading
```
Additionally, the ESP32 LedCtrl OverWebServer project contains Makefile and component.mk files, used for the legacy Make based build system. 
They are not used or needed when building with CMake and idf.py.

Last but not least the ESP32 LedCtrl OverWebServer project contains a data folder that holds the index.html file. This file is responisble for the user interface and the communication between the UI and the WebServer. 