#ifndef LAPTOP_H
#define LAPTOP_H
#include "ElectronicDevice.h"
class Laptop: public ElectronicDevice{
    protected:
        int performanceLevel; // a percentage value between 0 and 100
    public:
        Laptop();
        Laptop(int batteryCapacity, int performanceLevel);
        void setPerformanceLevel(int performanceLevel);
        int getPerformanceLevel() const;
        double getBatteryConsumption() override;
};
#endif