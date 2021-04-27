#ifndef LM35_SENSORS_H
#define LM35_SENSORS_H

#include <Arduino.h>
#include <sensors/sensor.h>



class Lm35Sensors : public SensorABC<int> {
    public:
        Lm35Sensors(uint8_t id, uint8_t pin):SensorABC<int>(id) {
            this->pin = pin;
            
        };
    private:
        uint8_t pin;
        int read(); 
};


int Lm35Sensors::read() {
    return (rand() % 1025)*100*5/1024;
}

#endif