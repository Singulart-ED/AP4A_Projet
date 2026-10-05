#ifndef PROJET_TP_SENSOR_H
#define PROJET_TP_SENSOR_H

 
#include <iostream>
#include <string>


class Sensor{

    private :
        D m_data();
        Server *m_ptrServer();
        Time m_time();
        std::String m_type();

    public:
        static int m_id();

        Sensor();
        Sensor(const Sensor& s);
        ~Sensor();

        Sensor& operator=(const Sensor& b); 
        Sensor& update(Time t);
        void execute(); 
        

};

int Sensor::m_id = 0;


#endif //PROJET_TP_SENSOR_H
