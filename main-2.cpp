#include"Ship.h"
#include"Explosion.h"
#include "Mine.h"
#include<iostream>
using namespace std;
int main(){
    Ship ship(5,5);
    Mine mine(6,6);
    ship.move(1,0);
    cout<<"ship moved"<<std::get<0>(ship.getPos())<<","<<std::get<1>(ship.getPos())<<endl;

    Explosion explosion=mine.explode();
    explosion.apply(ship);
    cout<<"ship destroyed at:"<<std::get<0>(ship.getPos())<<","<<std::get<1>(ship.getPos())<<endl;
    return 0;

}