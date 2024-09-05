#include<iostream>
#include "House.h"
#include "Fridge.h"
#include "TV.h"
using namespace std;
int main(){
    House h(2); //using parameter constructor to create 3 appliances
    TV* tv = new TV(150, 42);      
    Fridge* fridge = new Fridge(200, 350);
    h.addAppliance(tv);
    h.addAppliance(fridge);
    cout<<h.getTotalPowerConsumption()<<endl;
    return 0;
}