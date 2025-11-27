#include "filters.h"

/* ------------------- Simple Moving Average ------------------- */
#define SMA_N 10
static uint16_t sma_buffer[SMA_N] = {0};
static uint8_t sma_index = 0;

uint16_t SMA_Filter(uint16_t new_sample)
{
    sma_buffer[sma_index] = new_sample;
    sma_index = (sma_index + 1) % SMA_N;

    uint32_t sum = 0;
    for (uint8_t i = 0; i < SMA_N; i++)
        sum += sma_buffer[i];

    return (uint16_t)(sum / SMA_N);
}

/* ------------------- EMA: Forward Euler ------------------- */
static float y_prev_forward = 0;

uint16_t EMA_Forward(uint16_t new_sample, float alpha)
{
    float y_new = alpha * new_sample + (1 - alpha) * y_prev_forward;
    y_prev_forward = y_new;
    return (uint16_t)y_new;
}

/* ------------------- EMA: Backward Euler ------------------- */
static float y_prev_backward = 0;

uint16_t EMA_Backward(uint16_t new_sample, float alpha)
{
    float y_new = (alpha / (1 + alpha)) * new_sample + (1 / (1 + alpha)) * y_prev_backward;
    y_prev_backward = y_new;
    return (uint16_t)y_new;
}

/* ------------------- EMA: Trapezoidal Euler ------------------- */
static float y_prev_trap = 0;
static float x_prev_trap = 0;

uint16_t EMA_Trapezoidal(uint16_t new_sample, float tau, float T)
{
    float a = (2 * tau - T) / (2 * tau + T);
    float b = T / (2 * tau + T);

    float y_new = a * y_prev_trap + b * (new_sample + x_prev_trap);

    // update previous values
    y_prev_trap = y_new;
    x_prev_trap = new_sample;

    return (uint16_t)y_new;
}
/*
 * filters.c
 *
 *  Created on: Nov 5, 2025
 *      Author: Ekansh
 */


