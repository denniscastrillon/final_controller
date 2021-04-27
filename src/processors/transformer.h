#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <Arduino.h>

template<class T>
T To_Farenheit(T value) {
    return T(value * (9/5))+32;
}

template<class T>
T To_Kelvin(T value) {
    return T(value + 273);
}

template<class T>
T To_Rankine(T value) {
    return T(value * (9/5)) + 491.67;
}


#endif