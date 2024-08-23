#include "Unit.h"
#include<iostream>
using namespace std;
extern int get_Num_Bedrooms(int num_beds);
extern int get_Value(int unit_val);
double get_Area(double unit_size);
int main(){
    Unit apartment;
    Unit();
    Unit(2000,2,50.5);
    get_Num_Bedrooms(2);
    get_Value(2000);
    get_Area(50.5);
    return 0;
}