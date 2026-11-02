//
// Created by Yann on 19/10/2026.
//

#ifndef PROJET_TP_HUMIDITY_H
#define PROJET_TP_HUMIDITY_H
#include <ctime>

#include "Sensor.h"

class Humidity : public Sensor<float>{
public:
    Humidity();
    ~Humidity();
    Humidity & operator=(const Humidity& h);
    Humidity(const Humidity& h);

    void update(time_t t); // appelle execute
    void execute();

    float getVal();
};

#endif //PROJET_TP_HUMIDITY_H
