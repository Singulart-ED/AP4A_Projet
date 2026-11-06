
#include <cstdlib>
#include <iostream>

#include "Server.hpp"
#include "Sound.h"

Sound::Sound(int period, Server* ptrServer) : Sensor<float>(period, ptrServer) {
    m_type = "Sound";
}

Sound::Sound(const Sound& s) : Sensor<float>(s) {}

Sound::~Sound() {}

Sound & Sound::operator=(const Sound& s) {
    if (this != &s) {
        Sensor<float>::operator=(s);
    }
    return *this;
}

void Sound::execute() {

    srand(time(0));
    
    value = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/140));

    m_ptrServer->consoleWrite(
        std::numeric_limits<int>::quiet_NaN(), // Temp
        2, // Light
        std::numeric_limits<float>::quiet_NaN(), // Hum
        value  // Son
    );

    m_ptrServer->fileWrite(this);
}


float Sound::getVal() {
    return value;
}