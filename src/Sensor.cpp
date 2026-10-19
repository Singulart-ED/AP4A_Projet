#include "Sensor.h"
#include "Server.hpp"
 
using namespace std;

Sensor::Sensor()
{
    m_d();
    m_ptrServer(nullptr);
    timestamp();
    m_type();
}

Sensor::Sensor(const Sensor &s)
{
    m_d(s.m_d);
    timestamp(s.timestamp);
    m_type(s.m_type);
    m_ptrServer = new Server;
    *m_ptrServer = *s.m_ptrServer;
    // m_id++;
}

Sensor::~Sensor()
{
    delete m_ptrServer;
    m_ptrServer = nullptr;
}


Sensor& Sensor::operator=(const Sensor& b)
{

    if (this != &b) 
    {
        std::cout << "Creation d'un nouveau sensor par recopie" << std::endl;
    }

    return *this;
}


