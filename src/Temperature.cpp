//
// Created by Yann on 19/10/2026.
//

#include "Temperature.h"
#include <cstdlib>
#include <iostream>
#include <bits/locale_facets_nonio.h>

Temperature::Temperature() : Sensor<int>() {
    m_type = "Temperature";
}

Temperature::~Temperature() {}

Temperature & Temperature::operator=(const Temperature& t) {
    if (this != &t) {
        Sensor<int>::operator=(t);
    }
    return *this;
}

Temperature::Temperature(const Temperature& t) : Sensor<int>(t) {}

void Temperature::update(time_t t) {
    if (t - timestamp >= m_period) {
        value = std::rand() % 40;
        execute();
        timestamp = t;
    }
}


void Temperature::execute() {
    std::cout << "Capteur " << m_id << " (" << m_type << ") : valeur = " << value << std::endl;
}

int getVal() {
    return value;
}