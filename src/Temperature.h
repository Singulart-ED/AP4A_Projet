#ifndef PROJET_TP_TEMPERATURE_H
#define PROJET_TP_TEMPERATURE_H

#include <chrono> 

#include "Sensor.hpp"

class Server;

class Temperature : public Sensor<int>{
    public:
        Temperature(int period=0, Server* ptrServer=nullptr);
        Temperature(const Temperature& t);

        ~Temperature();
        Temperature & operator=(const Temperature& t);

        void execute() override;

        int getVal();
};


#endif //PROJET_TP_TEMPERATURE_H
