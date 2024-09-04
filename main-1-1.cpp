#include<iostream>
#include "Appliance.h"
using namespace std;
int main(){
    Appliance kettle;
    kettle.set_powerRating(56);
    kettle.set_isOn(false);
    cout<<kettle.get_powerRating()<<endl; //works
    cout<<kettle.get_isOn()<<endl;
    cout<<kettle.getpowerconsumption()<<endl;
    kettle.turnOff();
    kettle.turnOn();
    cout<<kettle.get_isOn()<<endl;
    cout<<kettle.getpowerconsumption()<<endl;
    return 0;
}