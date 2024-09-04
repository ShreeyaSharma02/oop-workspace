#include "Fridge.h"
#include "Appliance.h"
#include"TV.h"
#include<iostream>
using namespace std;
int main(){
    TV sony;
    sony.set_powerRating(50);
    sony.setScreenSize(29);
    cout<<sony.getScreenSize()<<endl;
    cout<<sony.getPowerConsumption()<<endl;
    return 0;
}