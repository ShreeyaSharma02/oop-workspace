#include<iostream>
#include "Appliance.h"
#include"Fridge.h"
using namespace std;
int main(){
    Fridge fridge;
    fridge.setVolume(23);
    cout<<fridge.getVolume()<<endl;
    cout<<fridge.getpowerconsumption()<<endl;
    return 0;
}