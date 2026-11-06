#ifndef SENSOR_BASE_H
#define SENSOR_BASE_H

class SensorBase {
    public:
        virtual ~SensorBase() = default;

        virtual void update(int t) = 0;
        virtual void execute() = 0;
};

#endif