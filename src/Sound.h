//
// Created by Yann on 19/10/2026.
//

#ifndef PROJET_TP_SOUND_H
#define PROJET_TP_SOUND_H
#include "Sensor.hpp"

class Sound : public Sensor<float>{
public:
    Sound();
    ~Sound();
    Sound & operator=(const Sound& s);
    Sound(const Sound& s);

    void update(time_t t); // appelle execute
    void execute();

    float getVal();
};


#endif //PROJET_TP_SOUND_H
