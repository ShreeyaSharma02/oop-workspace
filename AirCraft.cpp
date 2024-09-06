#include "AirCraft.h"
AirCraft::AirCraft(){
    this->weight=0;
    this->fuel=0;
    this->numberOfFlights=0;
}
AirCraft::AirCraft(int w){
    this->weight=w;
    this->fuel=fuel;
    this->numberOfFlights=numberOfFlights;
}
void AirCraft::set_weight(int Weight){
    this->weight=Weight;
}
void AirCraft::set_fuel(float Fuel){
    this->fuel=Fuel;
}
void AirCraft::set_numberOfFlights(int numberofflights){
    this->numberOfFlights=numberofflights;
}
int AirCraft::get_weight(){
    return weight;
}
int AirCraft::get_numberOfFlights(){
    return numberOfFlights;
}
float AirCraft::get_fuel(){
    return fuel;
}
void AirCraft::refuel(){
    this->fuel=100;
}
void AirCraft::fly(int headwind, int minutes){
    numberOfFlights+=1;
}