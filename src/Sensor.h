#ifndef PROJET_TP_SENSOR_H
#define PROJET_TP_SENSOR_H

 
#include <iostream>
#include <string>
#include <ctime>
#include "Server.hpp"


template <typename V>
class Sensor{

    private:
        V value;
        Server* m_ptrServer;
        time_t timestamp;
        std::string m_type;

    public:
        static int m_id;

        Sensor();
        Sensor(const Sensor& s);
        ~Sensor();

        Sensor& operator=(const Sensor& b); 
        void update(time_t t);
        void execute(); 

};

template <typename V>
int Sensor<V>::m_id = 0;

#endif //PROJET_TP_SENSOR_H
