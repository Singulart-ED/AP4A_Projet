//
// Created by Yann on 19/10/2026.
//

#ifndef PROJET_TP_SOUND_H
#define PROJET_TP_SOUND_H
#include "Sensor.h"

class Sound : public Sensor<float>{
public:
    Sound();
    ~Sound() override;
    Sound & operator=(const Sound& s);
    Sound(const Sound& s);

    void update(time_t t) override; // appelle execute
    void execute() override;
};


#endif //PROJET_TP_SOUND_H
