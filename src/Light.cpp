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

    m_ptrServer->consoleWrite(
        std::numeric_limits<int>::quiet_NaN(), // Temp
        value, // Light
        std::numeric_limits<float>::quiet_NaN(), // Hum
        std::numeric_limits<float>::quiet_NaN()  // Son
    );

    m_ptrServer->fileWrite(this);

}

bool Light::getVal() {
    return value;
}