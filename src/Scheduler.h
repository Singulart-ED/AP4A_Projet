#ifndef PROJET_TP_SCHEDULER_H
#define PROJET_TP_SCHEDULER_H

#include <vector>

#include "SensorBase.hpp"

class Scheduler {
        
    protected:
        std::vector<SensorBase*> arrayV;

    public:

        Scheduler() {}

        Scheduler(const Scheduler& s) {
            for (SensorBase* sensor : s.arrayV) {
                this->arrayV.push_back(sensor);
            }
        }

        ~Scheduler() {}

        Scheduler& operator=(const Scheduler& s) {
            if (this != &s) {
                this->arrayV.clear();

                for (SensorBase* sensor : s.arrayV) {
                    this->arrayV.push_back(sensor);
                }
            }

            return *this;
        }

        void simulation(int t) {
            for (SensorBase* sensor : arrayV) {
                if (sensor != nullptr) {
                    sensor->update(t);
                }
            }
        }

        void addSensor(SensorBase* s) {
            if (s != nullptr) {
                this->arrayV.push_back(s);
            }
        }
};

#endif //PROJET_TP_SCHEDULER_H