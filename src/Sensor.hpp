#ifndef PROJET_TP_SENSOR_H
#define PROJET_TP_SENSOR_H

 
#include <iostream>
#include <string>
#include <ctime>
#include "SensorBase.hpp"

class Server;

template <typename V>
class Sensor : public SensorBase {

    protected:
        int id;
        V value;
        Server* m_ptrServer;
        time_t m_period;
        std::string m_type;

    public:
        static int m_id;

        Sensor(int period=0, Server* ptrServer=nullptr);
        Sensor(const Sensor& s);
        virtual ~Sensor();

        Sensor& operator=(const Sensor& b); 
        void update(int t) override;


        void virtual execute() override = 0;

        int getId() const { return id; }
        std::string getType() const { return m_type; }
};

template <typename V>
int Sensor<V>::m_id = 0;

#endif //PROJET_TP_SENSOR_H
