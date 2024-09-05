#include "Smartphone.h"
#include<iostream>
using namespace std;
int main(){
    Smartphone apple;
    apple.setScreenBrightness(20);
    apple.set_batteryCapacity(1);
    cout<<apple.getScreenBrightness()<<endl;
    cout<<apple.getBatteryConsumption()<<endl;
    return 0;
}