#include "Sensor.h"
#include "Server.hpp"
#include <cstdlib>

using namespace std;


template <typename V>
Sensor<V>::Sensor()
{
    value();
    m_ptrServer = nullptr;
    timestamp = 0;
    m_period = 0;
    m_type = "";
}


template <typename V>
Sensor<V>::Sensor(const Sensor &s)
{
    value(s.value);
    timestamp = s.timestamp;
    m_period = s.m_period;
    m_type = s.m_type;
    m_ptrServer = new Server;
    *m_ptrServer = *s.m_ptrServer;
}

template <typename V>
Sensor<V>::~Sensor()
{
    delete m_ptrServer;
    m_ptrServer = nullptr;
}



template <typename V>
Sensor<V>& Sensor<V>::operator=(const Sensor<V> &b)
{

    if (this != &b) 
    {
        std::cout << "Creation d'un nouveau sensor par recopie" << std::endl;
    }

    return *this;
}