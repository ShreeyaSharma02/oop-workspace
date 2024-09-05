#include "Appliance.cpp"
#include"House.h"
#include<iostream>
using namespace std;
House::House(){
    this->numAppliances=0;
    this->appliances=nullptr;
    this->currentAppliances=0;
}
House::House(int numappliances){
    this->numAppliances=numappliances;
    this->currentAppliances=0;
    this->appliances=new Appliance*[numAppliances]; // Dynamic array of Appliance pointer
}
House::~House(){
    for(int i=0;i<currentAppliances;i++){ //deletes every item in appliance
        delete this->appliances[i];
    }
    delete[] this->appliances; //deletes array of apppliance
}
bool House::addAppliance(Appliance* appliance){
    if(currentAppliances<numAppliances){
        appliances[currentAppliances++]=appliance; //appliances array has index at every currentappliances where the appliance which we add will be added to array
        return true;
    }
    return false;
}
double House::getTotalPowerConsumption(){
    double totalPowerConsumption=0.0;
    for(int i=0;i<currentAppliances;i++){
        totalPowerConsumption+=appliances[i]->getpowerconsumption(); // since appliances[i] is an array of pointer to appliance objects we use this pointer method to access the function
    }
    return totalPowerConsumption;
}
