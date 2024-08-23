#include<iostream>
using namespace std;
#include "Unit.h"
#include "ApartmentBuilding.h"
ApartmentBuilding::ApartmentBuilding(){
    int capacity=0;
};
ApartmentBuilding::ApartmentBuilding(int capacity){
    this->capacity=capacity;
    cout<<capacity<<endl;
};
int get_Capacity(int max){
    cout<<"maximum capacity allowed is:"<<max<<endl;
    return max;
};
int get_Current_Number_of_Units(int currentunit){
    cout<<currentunit<<endl;
    return currentunit;
}; 
Unit * get_Contents(int* max){
    cout<<max<<endl;
    return 0;
}
bool add_Unit(Unit unit){
    if(get_Current_Number_of_Units<get_Capacity){
        return false;
    }
    return true;

};