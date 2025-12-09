# Embedded Digital Signal Processing on Nucleo G474RE

## Overview

This project implements basic Digital Signal Processing (DSP) algorithms on the STM32 Nucleo G474RE microcontroller. It focuses on real-time signal filtering and demonstrates the implementation of an **Exponential Moving Average (EMA) low-pass filter**.
The project was developed as part of a Capstone Research Project.

## Features

* Implementation of fundamental DSP algorithms on an STM32 microcontroller
* For starters, an exponential moving average (EMA) low-pass filter
* Real-time data processing using Nucleo G474RE peripherals
* Modular and reusable code structure for embedded DSP applications

## Hardware

* STM32 Nucleo G474RE development board
* Optional: Analog signal input for testing filters

## Software

* STM32CubeIDE / HAL library
* C programming for microcontroller firmware
* ARM Cortex-M4 DSP instructions utilized for efficient computation

## Usage

1. Clone the repository:

   ```bash
   git clone https://github.com/Ekansh345/Implementation-of-dsp-algorithms-on-a-microcontroller.git
   ```
2. Open the project in **STM32CubeIDE**.
3. Compile and flash the firmware onto the Nucleo G474RE board.
4. Send input signals via ADC and observe filtered output on UART or DAC.

## Project Structure

```
├── Core/               # Source code for DSP algorithms
├── Inc/                # Header files
├── Docs/               # Project documentation (if any)
└── README.md           # This file
```

## Outcome

* Successfully implemented low-pass filtering on a microcontroller
* Verified algorithm functionality with test input signals
* Demonstrated real-time signal processing capabilities on embedded hardware


## Future Scope

* Implement additional DSP algorithms: high-pass, band-pass, moving average filters
* Interface with external sensors for real-world data processing
* Optimize for low-power or high-performance embedded applications
