#include "Airplane.h"
#include<iostream>
using namespace std;
int main(){
    Airplane c;
    c.reducePassengers(3);
    cout<<c.get_numPassengers()<<endl;
    c.fly(30,30);
    return 0;
}