#include<iostream>
#include "Fridge.h"
#include"TV.h"
#include "House.h"
// #include"Appliance.h"
using namespace std;
int main(){
    House h(3); //using parameter constructor to create 3 appliances
    Appliance* tv = new TV(150, 42);      
    Appliance* fridge = new Fridge(200, 350);
    h.addAppliance(tv);
    h.addAppliance(fridge);
    cout<<h.getTotalPowerConsumption()<<endl;
    return 0;
}