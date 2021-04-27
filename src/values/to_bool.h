#ifndef TO_BOOL_H
#define TO_BOOL_H

#include <Arduino.h>


template<class T>
T to_bool(T value) {
    return value>150;
}
#endif