#include "Unit.h"
#include<iostream>
using namespace std;
Unit::Unit(){
    num_beds=0;
    unit_val=0;
    unit_size=0.0;
};
Unit::Unit(int unit_val,int num_beds,double unit_size){
    this->unit_val=unit_val;
    this->num_beds=num_beds;
    this->unit_size=unit_size;
};
int get_Num_Bedrooms(int num_beds){
    cout<<num_beds<<endl;
    return num_beds;
};
int get_Value(int unit_val){
     cout<<unit_val<<endl;
    return unit_val;
};
double get_Area(double unit_size){
     cout<<unit_size<<endl;
    return unit_size;
}