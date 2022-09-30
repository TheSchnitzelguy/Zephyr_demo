# Zephyr_demo
This repository contains some demo code to use Zephyr OS with PlatformIO 

# NRF52840DK setup
* Before flashing the binary to the development board, download the NRF Commandline tools from https://www.nordicsemi.com/Products/Development-tools/nRF-Command-Line-Tools/Download?lang=en#infotabs

# STM32F103C8T6-Bluepill setup
* Before flashing the binary to the board, download the STM32 ST-LINK Utility from https://www.st.com/en/development-tools/stsw-link004.html
* In the ST-LINK Utility, go to settings and change connection type to `connect under reset`
* Connect to the development board and erase the Device Memory, after this step, the binary can be flashed from PlatformIO