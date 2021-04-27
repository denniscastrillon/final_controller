#ifndef ALARM_H
#define ALARM_H

#include <Arduino.h>

const int ledPIN = 9;

template<class T>
T Compare(T value) {
    pinMode(ledPIN,OUTPUT);
    if (value >= 150){
        digitalWrite(ledPIN , HIGH);
        return 1;
    }
    else{
        digitalWrite(ledPIN , LOW);
        return 0;
    }
}
#endif