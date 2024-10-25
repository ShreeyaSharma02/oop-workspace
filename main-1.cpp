#include<iostream>
#include "GridItem.h"
#include "Helper.h"
int main(){
    GridItem ship;
    ship.setCoordinates(5,3);
    ship.getGridHeight();
    ship.getGridwidth();
    ship.getActiveGridItemCount();
    return 0;
}