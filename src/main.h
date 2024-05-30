#if !defined(JAM_MAIN)
#define JAM_MAIN

#include <Arduino.h>
#include <FreeRTOS.h>

#include "serialPort/serialPort.h"
#include "display/lcd.h"



void setSensorTask(TaskFunction_t t);
void setTbClientTask(TaskFunction_t t);

#endif // JAM_MAIN