
#ifndef PROJET_TP_LIGHT_H
#define PROJET_TP_LIGHT_H

#include <chrono> 

#include "Sensor.hpp"

class Server;


class Light : public Sensor<bool> {
public:
    Light(int period=0, Server* ptrServer=nullptr);
    Light(const Light& l);

    ~Light();
    Light& operator=(const Light& l);

    void execute() override;

    bool getVal();
};

#endif //PROJET_TP_LIGHT_H