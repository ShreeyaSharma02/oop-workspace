#include "Airplane.h"
#ifndef AIRPLANE_H
#define AIRPLANE_H
// #include "AirCraft.cpp"
#include<iostream>
using namespace std;
Airplane::Airplane(){
    this->weight=0;
    this->numPassengers=0;
}
Airplane::Airplane(int w, int p){
    this->weight=w;
    this->numPassengers=p;
}
void Airplane::reducePassengers(int x){
    this->numPassengers=numPassengers-x;
    if(numPassengers<0){
        this->numPassengers=0;
    }
}
int Airplane::get_numPassengers(){
    return numPassengers;
}
void Airplane::fly(int headwind, int minutes){
    this->fuel=0.3-(0.5 * minutes)-(0.001 *numPassengers * minutes);
     if(this->fuel<0.2){
        cout<<"cannot fly and takeoff"<<endl;
        this->numberOfFlights=numberOfFlights;
    }
}
#endif