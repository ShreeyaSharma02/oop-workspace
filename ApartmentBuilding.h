#include<iostream>
#include "Unit.h"
using namespace std;
class ApartmentBuilding{
    private:
    int capacity;
    
    public:
    ApartmentBuilding();             
    ApartmentBuilding(int capacity);  
    int get_Capacity();
    int get_Current_Number_of_Units(); 
    Unit * get_Contents();
    bool add_Unit(Unit unit);
    ~ApartmentBuilding();

};