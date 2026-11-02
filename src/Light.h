//
// Created by Yann on 19/10/2026.
//

#ifndef PROJET_TP_LIGHT_H
#define PROJET_TP_LIGHT_H

#include "Sensor.h"

class Light : public Sensor<bool> {
public:
    Light();
    ~Light() override;
    Light& operator=(const Light& l);
    Light(const Light& l);

    void update(time_t t) override;
    void execute() override;
};


#endif //PROJET_TP_LIGHT_H
