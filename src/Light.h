//
// Created by Yann on 19/10/2026.
//

#ifndef PROJET_TP_LIGHT_H
#define PROJET_TP_LIGHT_H

#include "Sensor.hpp"

class Light : public Sensor<bool> {
public:
    Light();
    ~Light();
    Light& operator=(const Light& l);
    Light(const Light& l);

    void update(time_t t);
    void execute();

    bool getVal();
};

#endif //PROJET_TP_LIGHT_H
