#include <cstdlib>
#include <iostream>

#include "Light.h"
#include "Server.hpp"


Light::Light(int period, Server* ptrServer) : Sensor<bool>(period, ptrServer) {
    m_type = "Light";
}

Light::Light(const Light& l) : Sensor<bool>(l) {}


Light::~Light() {}

Light& Light::operator=(const Light& l) {
    if (this != &l) {
        Sensor<bool>::operator=(l);
    }
    return *this;
}


void Light::execute() {

    srand(time(0));
    
    value = static_cast <bool> (rand()); // à MODIFIER

    // std::cout << "Capteur " << m_id << " (" << m_type << ") : valeur = " << value << std::endl;

    m_ptrServer->consoleWrite();

}

// bool getVal() {
//     return value;
// }