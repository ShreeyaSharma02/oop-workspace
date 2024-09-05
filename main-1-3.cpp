#include "Laptop.h"
#include<iostream>
using namespace std;
int main(){
    Laptop dell;
    dell.setPerformanceLevel(30);
    dell.set_batteryCapacity(20);
    cout<<dell.get_batteryCapacity()<<endl;
    cout<<dell.getPerformanceLevel()<<endl;
    cout<<dell.getBatteryConsumption()<<endl;
    return 0;
}