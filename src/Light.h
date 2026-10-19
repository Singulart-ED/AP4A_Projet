//
// Created by Yann on 19/10/2026.
//

#ifndef PROJET_TP_LIGHT_H
#define PROJET_TP_LIGHT_H

#include "Sensor.h"

class Light : public Sensor{
    private:
    bool value;
    public:
    Light();
    ~Light();
    Light & operator=(const Light& l);
    Light(const Light&);
};



#endif //PROJET_TP_LIGHT_H
