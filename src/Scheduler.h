//
// Created by Yann on 05/10/2026.
//

#ifndef PROJET_TP_SCHEDULER_H
#define PROJET_TP_SCHEDULER_H

#include "Sensor.h"

class Scheduler {
    public:
        Scheduler();

        Scheduler(const Scheduler& s);

        ~Scheduler();

        void operator = (const Scheduler& s);

        void simuation();

        void addSensor(Sensor s);
};

#endif //PROJET_TP_SCHEDULER_H
