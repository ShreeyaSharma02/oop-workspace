#include<iostream>
#include "ElectronicDevice.h"
ElectronicDevice::ElectronicDevice(){
    this->batteryCapacity=0;
    this->isOn=false;
}
ElectronicDevice::ElectronicDevice(int batterycapacity){
    this->batteryCapacity=batterycapacity;
}
void ElectronicDevice::set_batteryCapacity(int batterycapacity){
    this->batteryCapacity=batterycapacity;
}
int ElectronicDevice::get_batteryCapacity() const{
    return batteryCapacity;
}
void ElectronicDevice::turnOn(){
    this->isOn=true;
}
void ElectronicDevice::turnOff(){
    this->isOn=false;
}
bool ElectronicDevice::get_isOn() const{
    return isOn;
}
double ElectronicDevice::getBatteryConsumption(){
    return 0.0;
}
