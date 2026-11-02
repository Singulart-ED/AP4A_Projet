//
// Created by Yann on 19/10/2026.
//

#include "Sound.h"
#include <cstdlib>
#include <iostream>

Sound::Sound() : Sensor<float>() {
    m_type = "Sound";
}

Sound::~Sound() {}

Sound & Sound::operator=(const Sound& s) {
    if (this != &s) {
        Sensor<float>::operator=(s);
    }
    return *this;
}

Sound::Sound(const Sound& s) : Sensor<float>(s) {}

void Sound::update(time_t t) {
    if (t - timestamp >= m_period) {
        value = static_cast<float>(std::rand() % 160);
        execute();
        timestamp = t;
    }
}

void Sound::execute() {
    std::cout << "Capteur " << m_id << " (" << m_type << ") : valeur = " << value << std::endl;
}
