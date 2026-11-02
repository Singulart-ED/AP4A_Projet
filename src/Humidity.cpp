//
// Created by Yann on 19/10/2026.
//

#include "Humidity.h"
#include <cstdlib>
#include <iostream>

Humidity::Humidity() : Sensor<float>() {
    m_type = "Humidity";
}

Humidity::~Humidity() {}

Humidity& Humidity::operator=(const Humidity& h) {
    if (this != &h) {
        Sensor<float>::operator=(h);
    }
    return *this;
}

Humidity::Humidity(const Humidity& h) : Sensor<float>(h) {}

// Retrait de "template <typename V>"
void Humidity::update(time_t t) {
    if (t - timestamp >= m_period) {
        value = 30.0f + static_cast<float>(std::rand() % 500) / 10.0f;
        execute();
        timestamp = t;
    }
}

// Retrait de "template <typename V>" et utilisation de "m_id"
void Humidity::execute() {
    std::cout << "Capteur " << m_id << " (" << m_type << ") : valeur = " << value << std::endl;
}