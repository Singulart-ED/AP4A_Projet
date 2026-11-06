
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
    
    value = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/100));

    // std::cout << "Capteur " << m_id << " (" << m_type << ") : valeur = " << value << std::endl;

    m_ptrServer->consoleWrite();

}


// float getVal() {
//     return value;
// }