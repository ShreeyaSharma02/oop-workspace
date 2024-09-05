#include "Appliance.cpp"
#include"TV.h"
#include<iostream>
using namespace std;
TV::TV(){
    this->set_powerRating(0);
    this->screenSize=0.0;
}
TV::TV(int powerrating, double screensize){
    this->set_powerRating(powerrating);
    this->screenSize=screensize;
}
void TV::setScreenSize(double screenSize){
    this->screenSize=screenSize;
}
double TV::getScreenSize() const{
    return screenSize;
}
double TV::getPowerConsumption() const{
    return this->powerRating*(this->screenSize/10);
}