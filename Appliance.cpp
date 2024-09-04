#include "Appliance.h"

Appliance::Appliance()
{ 
    this->isOn = false; //initialise
    this->powerRating=0;
}

Appliance::Appliance(int powerrating)  
{ 
    this->isOn= false;
    this->powerRating = powerrating;

}
//getters and setters for protected class
void Appliance::set_powerRating(int powerrating){
    this->powerRating=powerrating;
}
void Appliance::set_isOn(bool on){
    this->isOn=on;
}
//getters
int Appliance::get_powerRating() const{
    return powerRating;
}
bool Appliance::get_isOn()const{
    return isOn;
}

void Appliance::turnOn(){ 
    this->set_isOn(true);   
}
void Appliance::turnOff(){
    this->set_isOn(false);
}
double Appliance::getpowerconsumption() { 
    return 0.0;
}

