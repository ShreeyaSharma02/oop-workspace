#include"AirCraft.h"
#include<iostream>
using namespace std;
int main(){
    AirCraft indigo;
    indigo.set_fuel(50.0);
    indigo.set_numberOfFlights(3);
    indigo.set_weight(200);
    cout<<indigo.get_fuel()<<endl;
    cout<<indigo.get_weight()<<endl;
    cout<<indigo.get_numberOfFlights()<<endl;
    indigo.refuel();
    cout<<indigo.get_fuel()<<endl;
    indigo.fly(200,30);
    return 0;
}