#ifndef PRINTER_H
#define PRINTER_H

#include <Arduino.h>

void Printer (Stream &uart, float value, char* label) {
    char output[64];
    sprintf(output, "%s -> %d \n", label, int(value));
    uart.print(output);
}

#endif