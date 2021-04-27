#ifndef WRITE_H
#define WRITE_H

#include <Arduino.h>

template<class T>
class WriteABC {
    public:
        WriteABC();
        WriteABC(T value, uint8_t source);
        uint8_t getSource();
        T getValue();
    private:
        T value;
        uint8_t source;
};

template<class T>
WriteABC<T>::WriteABC(T value, uint8_t source) {
    this->value = value;
    this->source = source;
}

template<class T>
WriteABC<T>::WriteABC() {}

template<class T>
T WriteABC<T>::getValue() {
    return this->value;
}

template<class T>
uint8_t WriteABC<T>::getSource() {
    return this->source;
}

#endif