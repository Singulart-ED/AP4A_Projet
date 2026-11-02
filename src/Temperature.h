//
// Created by Yann on 19/10/2026.
//

#ifndef PROJET_TP_TEMPERATURE_H
#define PROJET_TP_TEMPERATURE_H

#include "Sensor.h"

class Temperature : public Sensor<int>{
public:
    Temperature();
    ~Temperature() override;
    Temperature & operator=(const Temperature& t);
    Temperature(const Temperature& t);

    void update(time_t t) override; // appelle execute
    void execute() override;
};

#endif //PROJET_TP_TEMPERATURE_H
