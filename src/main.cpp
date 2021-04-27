#include <Arduino.h>

#include <sensors/analog_sensor.h>
#include <sensors/digital_sensor.h>
#include <sensors/lm35_sensors.h>
#include <processors/transformer.h>

uint8_t source_lm35 = A0;
AnalogSensor sensor = AnalogSensor(0x7E, source_lm35);
Lm35Sensors sensor_lm35 = Lm35Sensors(13, source_lm35);


void setup() {
  Serial.begin(9600);
}

void loop() {
sensor.excecute();
    sensor_lm35.excecute();
    int raw_lm35= sensor_lm35.getValue().getValue();
    int raw_read = sensor.getValue().getValue();
    Serial.print(raw_read);
    Serial.print("\n  ");
    Serial.print(raw_lm35);
    Serial.print("\n  ");

    float temp_farenheit=To_Farenheit(raw_lm35);
    
  
}