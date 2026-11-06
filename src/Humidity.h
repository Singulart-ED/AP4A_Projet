#ifndef PROJET_TP_HUMIDITY_H
#define PROJET_TP_HUMIDITY_H

#include <chrono> 

#include "Sensor.hpp"

class Server;


class Humidity : public Sensor<float> {
    public :
        Humidity(int period=0, Server* ptrServer=nullptr);
        Humidity(const Humidity& h);

        ~Humidity();
        Humidity & operator=(const Humidity& h);

        void execute() override;

        // float getVal();
};

#endif //PROJET_TP_HUMIDITY_H
