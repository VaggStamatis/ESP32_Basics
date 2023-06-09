| Supported Targets | ESP32 | ESP32-C2 | ESP32-C3 | ESP32-C6 | ESP32-H2 | ESP32-S2 | ESP32-S3 |
| ----------------- | ----- | -------- | -------- | -------- | -------- | -------- | -------- |

# _User LED Control_
This project uses the projects BlinkLED and KeyboardInput to take a user input from the keyboard in order to 
activate a LED or keep it deactivated.  


## How to use example
To run just execute the following **command** while being into projects folder 
`idf.py flash monitor`

## Example folder contents

The project **User LED Control** contains one source file in C language [main.c](main/main.c). The file is located in folder [main](main).

ESP-IDF projects are built using CMake. The project build configuration is contained in `CMakeLists.txt`
files that provide set of directives and instructions describing the project's source files and targets
(executable, library, or both). 

Below is short explanation of remaining files in the project folder.

```
├── CMakeLists.txt
├── main
│   ├── CMakeLists.txt
│   └── main.c
└── README.md                  This is the file you are currently reading
```
Additionally, the User LED Control contains Makefile and component.mk files, used for the legacy Make based build system. 
They are not used or needed when building with CMake and idf.py.

## LED wiring on the ESP32 
In order to have a LED controlled by the ESP32 you need to connect it as shown in the picture below.
<img src="https://github.com/VaggStamatis/ESP32_Basics/blob/main/ESP_User_LEDCtrl/ESP_BlinkLED_Wiring.png" width="600">