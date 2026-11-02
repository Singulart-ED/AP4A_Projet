#ifndef PROJET_TP_SENSOR_H
#define PROJET_TP_SENSOR_H

 
#include <iostream>
#include <string>
#include <ctime>
#include "Server.hpp"


template <typename V>
class Sensor{

    protected:
        V value;
        Server* m_ptrServer;
        time_t timestamp;
        time_t m_period;
        std::string m_type;

    public:
        static int m_id;

        Sensor();
        Sensor(const Sensor& s);
        virtual ~Sensor();

        Sensor& operator=(const Sensor& b); 
        virtual void update(time_t t) = 0; // appelle execute
        virtual void execute() = 0;

};

template <typename V>
int Sensor<V>::m_id = 0;

#endif //PROJET_TP_SENSOR_H
