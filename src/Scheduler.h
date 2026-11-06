//
// Created by Yann on 05/10/2026.
//

#ifndef PROJET_TP_SCHEDULER_H
#define PROJET_TP_SCHEDULER_H

#include <vector>
#include "Sensor.hpp"

template <typename T>
class Scheduler {
protected:
    std::vector<Sensor<T>*> arrayV;

public:
    Scheduler() {}

    Scheduler(const Scheduler<T>& s) {
        for (Sensor<T>* sensor : s.arrayV) {
            this->arrayV.push_back(sensor);
        }
    }

    ~Scheduler() {
        arrayV.clear();
    }

    Scheduler<T>& operator=(const Scheduler<T>& s) {
        if (this != &s) {
            this->arrayV.clear();
            for (Sensor<T>* sensor : s.arrayV) {
                this->arrayV.push_back(sensor);
            }
        }
        return *this;
    }

    void simulation(int t) {
        for (Sensor<T>* sensor : arrayV) {
            if (sensor != nullptr) {
                sensor->update(t);
            }
        }
    }

    void addSensor(Sensor<T>* s) {
        if (s != nullptr) {
            this->arrayV.push_back(s);
        }
    }
};

#endif //PROJET_TP_SCHEDULER_H
