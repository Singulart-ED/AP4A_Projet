//
// Created by Yann on 19/10/2026.
//

#include "Light.h"
#include <cstdlib>
#include <iostream>

Light::Light() : Sensor<bool>() {
    m_type = "Light";
}

Light::~Light() {}

Light& Light::operator=(const Light& l) {
    if (this != &l) {
        Sensor<bool>::operator=(l);
    }
    return *this;
}

Light::Light(const Light& l) : Sensor<bool>(l) {}

void Light::update(time_t t) {
    if (t - timestamp >= m_period) {
        value = static_cast<bool>(std::rand() % 2);
        execute();
        timestamp = t;
    }
}

void Light::execute() {
    std::cout << "Capteur " << m_id << " (" << m_type << ") : valeur = " << value << std::endl;
}
