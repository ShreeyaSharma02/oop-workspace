#include "Laptop.h"
#include "ElectronicDevice.cpp"
Laptop::Laptop(){
    this->set_batteryCapacity(0);
    this->performanceLevel=0;
}
Laptop::Laptop(int batterycapacity, int performancelevel){
    this->set_batteryCapacity(batterycapacity);
    this->performanceLevel=performancelevel;
}
void Laptop::setPerformanceLevel(int performancelevel){
    this->performanceLevel=performancelevel;
}
int Laptop::getPerformanceLevel() const{
    return performanceLevel;
}
double Laptop::getBatteryConsumption(){
    return batteryCapacity * (performanceLevel / 100.0);
}