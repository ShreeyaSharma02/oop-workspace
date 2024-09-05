#include<iostream>
using namespace std;
#include "ElectronicDevice.h"
int main(){
    ElectronicDevice fan;
    fan.set_batteryCapacity(50);
    cout<<fan.get_batteryCapacity()<<endl;
    fan.turnOn();
    cout<<(fan.get_isOn()?"yes":"no")<<endl;
    cout<<fan.getBatteryConsumption()<<endl;
    return 0;
}