
#include <cstdlib>
#include <iostream>

#include "Humidity.h"
#include "Server.hpp"

Humidity::Humidity(int period, Server* ptrServer) : Sensor<float>(period, ptrServer) {
    m_type = "Humidity";
}

Humidity::Humidity(const Humidity& h) : Sensor<float>(h) {
 // à faire
}


Humidity::~Humidity() {}

Humidity& Humidity::operator=(const Humidity& h) {
    if (this != &h) {
        Sensor<float>::operator=(h);
    }
    return *this;
}


void Humidity::execute() {

    srand(time(0));
    
    value = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/100));

    // std::cout << "Capteur " << m_id << " (" << m_type << ") : valeur = " << value << std::endl;

    m_ptrServer->consoleWrite(
        std::numeric_limits<int>::quiet_NaN(), // Temp
        2, // Light
        value, // Hum
        std::numeric_limits<float>::quiet_NaN()  // Son
    );


}


// float getVal() {
//     // return m_type;
//     // return value; // à modifier
//     return 0; // à modifier
// }