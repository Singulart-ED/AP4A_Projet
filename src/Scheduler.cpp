//
// Created by Yann on 05/10/2026.
//

#include "Scheduler.h"

class Scheduler {
    private:
    vector<Sensor> arrayV;

    public:
    Scheduler() {
        for (Sensor s : arrayV) {
            s = Sensor();
        }
    }

    Scheduler(const Scheduler& s) {
        for (Sensor s : arrayV) {
            this->arrayV.push_back(s);
        }
    }

    ~Scheduler() {}

    void operator = (const Scheduler& s) {
        for (Sensor s : arrayV) {
            this->arrayV.push_back(s);
        }
    }

    void simuation() {
        for (Sensor s : arrayV) {
            s.update();
        }
    }

    void addSensor(Sensor s) {
        this->arrayV.push_back(s);
    }
};