#include "Appliance.cpp"
#include "Fridge.h"
#include<iostream>
using namespace std;
Fridge::Fridge(){
    this->set_powerRating(0);
    this->volume=0.0; //initialise
}
Fridge::Fridge(int powerrating, double volume){
    this->set_powerRating(powerrating);
    this->volume=volume; //defining values
}
//getter and setter
void Fridge::setVolume(double volume){
    this->volume=volume;
}
double Fridge::getVolume() const{
    return this->volume;
}
double Fridge::getpowerconsumption(){
    return this->powerRating*24*(this->volume/100);
}