
#include <cstdlib>
#include <iostream>
#include <bits/locale_facets_nonio.h>

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
    
    value = static_cast <int> (rand()) / (static_cast <int> (RAND_MAX/100));

    // std::cout << "Capteur " << m_id << " (" << m_type << ") : valeur = " << value << std::endl;

    m_ptrServer->consoleWrite();

}
// int getVal() {
//     return value;
// }