#ifndef SMARTPHONE_H
#define SMARTPHONE_H
#include "ElectronicDevice.h"
class Smartphone: public ElectronicDevice{
    protected:
        int screenBrightness; // a percentage value between 0 and 100
    public:
        Smartphone();
        Smartphone(int batteryCapacity, int screenBrightness);
        void setScreenBrightness(int screenBrightness);
        int getScreenBrightness() const;
        double getBatteryConsumption() override;
};
#endif