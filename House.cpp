#include "Fridge.h"
#include "Appliance.h"
#include"TV.h"
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
    this->appliances=new Appliance*[numAppliances]; //didn't get 
}
House::~House(){
    for(int i=0;i<currentAppliances;i++){ //destructor arguments didn't get
        delete this->appliances[i];
    }
    delete[] this->appliances;
}
bool House::addAppliance(Appliance* appliance){
    if(currentAppliances<numAppliances){
        appliances[currentAppliances++]=appliance;
        return true;
    }
    return false;
}
double House::getTotalPowerConsumption() const{
    double totalPowerConsumption=0.0;
    for(int i=0;i<currentAppliances;i++){
        totalPowerConsumption+=appliances[i]->getpowerconsumption();
    }
    return totalPowerConsumption;
}
