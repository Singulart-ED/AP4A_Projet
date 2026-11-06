
#include <cstdlib>
#include <iostream>

#include "Server.hpp"
#include "Temperature.h"


Temperature::Temperature(int period, Server* ptrServer) : Sensor<int>(period, ptrServer) {
    m_type = "Temperature";
}

Temperature::Temperature(const Temperature& t) : Sensor<int>(t) {}

Temperature::~Temperature() {}

Temperature & Temperature::operator=(const Temperature& t) {
    if (this != &t) {
        Sensor<int>::operator=(t);
    }
    return *this;
}

void Temperature::execute() {
    srand(time(0));
    
    value = static_cast <int> (rand()) / (static_cast <int> (RAND_MAX/39));
    value += 1;

    m_ptrServer->consoleWrite(
        value, // Temp
        2, // Light
        std::numeric_limits<float>::quiet_NaN(), // Hum
        std::numeric_limits<float>::quiet_NaN()  // Son
    );

    m_ptrServer->fileWrite(this);
}

int Temperature::getVal() {
    return value;
}

