#include"Helicopter.h"
#include "AirCraft.cpp"
#include<iostream>
using namespace std;
Helicopter::Helicopter(){
    this->name="";
    this->weight=0;
}
Helicopter::Helicopter(int w, string n){
    this->name=n;
    this->weight=w;
}
void Helicopter::set_name(string name){
    this->name=name;
}
string Helicopter::get_name(){
    return name;
}
void Helicopter::fly(int headwind, int minutes){
    this->fuel= 0.2-(0.4 * minutes)-(0.01 * weight *minutes);
    if(this->fuel<0.2){
        cout<<"cannot fly and takeoff"<<endl;
        this->numberOfFlights=numberOfFlights;
    }
}