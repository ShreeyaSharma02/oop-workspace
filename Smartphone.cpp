#include "Smartphone.h"
#include "ElectronicDevice.cpp"
Smartphone::Smartphone(){
    this->screenBrightness=0;
    this->set_batteryCapacity(0);
}
Smartphone::Smartphone(int batterycapacity, int screenbrightness){
    this->screenBrightness=screenbrightness;
    this->set_batteryCapacity(batterycapacity);

}
void Smartphone::setScreenBrightness(int screenbrightness){
    this->screenBrightness=screenbrightness;
}
int Smartphone::getScreenBrightness() const{
    return this->screenBrightness;
}
double Smartphone::getBatteryConsumption(){
    return this->batteryCapacity * (this->screenBrightness / 100.0);
}