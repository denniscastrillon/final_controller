#ifndef AGREGGATOR_H
#define AGREGGATOR_H

#include <Arduino.h>

template<class T>
class PromedioTotal {
private:
    T prom=0;
    int value;
public:
    PromedioTotal();
    float Suma(int);
    int contador=0;
};

template<class T>
PromedioTotal<T>::PromedioTotal() {
    
}

template<class T>
float PromedioTotal<T>::Suma(int value){
    this->value=value;
    if (this->contador >=10){
        this->prom=0;
        this->contador=0;
    } 
    float suma = (this->prom * this->contador) + this->value;
    this->contador += 1;
    this->prom = suma / this->contador;
    return this->prom;
}


#endif