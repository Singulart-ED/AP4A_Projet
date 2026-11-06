#ifndef PROJET_TP_SOUND_H
#define PROJET_TP_SOUND_H

#include <chrono> 

#include "Sensor.hpp"

class Server;

class Sound : public Sensor<float>{
    public:
        Sound(int period=0, Server* ptrServer=nullptr);
        Sound(const Sound& s);

        ~Sound();
        Sound & operator=(const Sound& s);

        void execute() override;

        float getVal();
};


#endif //PROJET_TP_SOUND_H
