# Embedded Digital Signal Processing on Matlab and Nucleo G474RE


## Overview

This project develops and implements Digital Signal Processing (DSP) algorithms using MATLAB for verification and the STM32 Nucleo G474RE microcontroller for real-time execution. The focus is on an **Exponential Moving Average (EMA) low-pass filter**. The various algorithms are developed by varying choice of numerical integration techniques.
The project is part of a Capstone Research Project.

## Features

* Algorithm development based on different numerical integration techniques.
* Testing of algorithms on MATLAB to confirm and plot expected results.
* Implementation of the developed algorithms on Nucleo G474RE microcontroller
* Real-time signal processing and hardware testing

## Hardware

* STM32 Nucleo G474RE development board
* Optional: Analog signal input for testing filters

## Software

* MATLAB for algorithm development and simulation
* STM32CubeIDE / HAL library for embedded implementation
* Embedded C programming
* ARM Cortex-M4 DSP instructions utilized for efficient computation

## Usage

1. Clone the repository:

   ```bash
   git clone https://github.com/Ekansh345/Implementation-of-dsp-algorithms-on-a-microcontroller.git
   ```
2. MATLAB scripts can be run to verify algorithms.
3. Open the STM32 project in **STM32CubeIDE**.
4. Compile and flash the firmware onto the Nucleo G474RE board.
5. Send input signals via ADC and observe filtered output on UART or DAC.

## Project Structure

```
├── MATLAB/             # Scripts for DSP algorithm verification
├── Core/               # Source code for microcontroller implementation
├── Inc/                # Header files
├── Docs/               # Project documentation (if any)
└── README.md           # This file
```

## Outcome

* Verified and compared numerical integration techniques and applied them to a low-pass filter algorithm in MATLAB before hardware implementation
* Successfully implemented low-pass filtering on Nucleo G474RE
* Demonstrated real-time signal processing capabilities on embedded hardware



## Future Scope

* Implement additional DSP algorithms: high-pass, band-pass, moving average filters
* Interface with external sensors for real-world data processing
* Optimize for low-power or high-performance embedded applications
