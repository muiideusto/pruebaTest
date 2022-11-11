/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

#define WAIT_TIME_MS 500 
DigitalOut led1(LED1);
int contador=0;
int a=5;
int b=6;
int resultado;

int sumaDatos(int a, int b);

int main()
{
    printf("This is the bare metal blinky example running on Mbed OS %d.%d.%d.\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);

    while (true)
    {
        led1 = !led1;
        contador++;
        resultado=sumaDatos(a,b);
        thread_sleep_for(WAIT_TIME_MS);
    }
}

int sumaDatos(int a, int b){
 int c;
 c=a+b;
 return c;

}