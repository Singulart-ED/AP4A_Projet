#ifndef PROJET_TP_SENSOR_H
#define PROJET_TP_SENSOR_H

 
#include <iostream>
#include <string>
#include <ctime>
#include "Server.hpp"


template <typename V>
class Sensor{

    protected:
        int id;
        std::string type;
        V value;
        Server* m_ptrServer;
        time_t m_period;
        std::string m_type;

    public:
        static int m_id;

        // Sensor();
        Sensor(int period=0, Server* ptrServer=nullptr);
        Sensor(const Sensor& s);
        virtual ~Sensor();

        Sensor& operator=(const Sensor& b); 
        void update(int t); // appelle execute


        // void virtual execute() = 0; // à définir dans chaque classe fille et envoyer les données via un paramètre 
        void execute(); // Pour tester
        //////////////////////////

        int getId() const { return id; }
        std::string getType() const { return type; }
};

template <typename V>
int Sensor<V>::m_id = 0;

#endif //PROJET_TP_SENSOR_H
