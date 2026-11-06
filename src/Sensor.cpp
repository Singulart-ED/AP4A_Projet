#include <cstdlib>
#include <iostream>
#include <chrono> 
#include <thread>

#include "SensorBase.hpp"
#include "Sensor.hpp"
#include "Server.hpp"


using namespace std;


template <typename V>
Sensor<V>::Sensor(int period, Server* ptrServer) : SensorBase()
{
    value = V{};
    m_ptrServer = ptrServer;
    m_period = period;
    m_type = "";
}


template <typename V>
Sensor<V>::Sensor(const Sensor &s)
{
    value = s.value;
    m_period = s.m_period;
    m_type = s.m_type;
    m_ptrServer = s.m_ptrServer;
}

template <typename V>
Sensor<V>::~Sensor() {}

template <typename V>
Sensor<V>& Sensor<V>::operator=(const Sensor<V> &b)
{

    if (this != &b) 
    {
        std::cout << "Creation d'un nouveau sensor par recopie" << std::endl;
    }

    return *this;
}


template <typename V>
void Sensor<V>::update(int t)
{

    auto duree = chrono::seconds(t); 

    auto debut = chrono::steady_clock::now();

    while (chrono::steady_clock::now() - debut < duree) {
        
        execute();
        
        this_thread::sleep_for(chrono::milliseconds(m_period)); 
    }

}


template class Sensor<int>;
template class Sensor<float>;
template class Sensor<double>;
template class Sensor<bool>;
