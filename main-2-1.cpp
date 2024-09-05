#include<iostream>
#include"Fridge.h"
using namespace std;
int main(){
    Fridge fridge;
    fridge.setVolume(23);
    fridge.set_powerRating(300);
    cout<<fridge.getVolume()<<endl;
    cout<<fridge.getpowerconsumption()<<endl;
    return 0;
}