#ifndef __FILTERS_H
#define __FILTERS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"

/* ---------- Function Prototypes ---------- */

// Simple Moving Average (FIR)
uint16_t SMA_Filter(uint16_t new_sample);

// Exponential Moving Average - Forward Euler
uint16_t EMA_Forward(uint16_t new_sample, float alpha);

// Exponential Moving Average - Backward Euler
uint16_t EMA_Backward(uint16_t new_sample, float alpha);

// Exponential Moving Average - Trapezoidal Euler
uint16_t EMA_Trapezoidal(uint16_t new_sample, float tau, float T);

#ifdef __cplusplus
}
#endif

#endif /* __FILTERS_H */
