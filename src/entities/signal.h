#ifndef SIGNAL_H
#define SIGNAL_H

#include <Arduino.h>
#include <entities/write.h>


class Signal : public WriteABC<float> {
    public:
        Signal():WriteABC(){};
        Signal(float value, uint8_t source):WriteABC(value, source){};
};

#endif