#include<iostream>
#include"Helicopter.h"
using namespace std;
int main(){
    Helicopter Alpha;
    Alpha.set_name("beoing77");
    cout<<Alpha.get_name()<<endl;
    Alpha.set_weight(20);
    cout<<Alpha.get_weight()<<endl;
    Alpha.set_fuel(2.0);
    Alpha.fly(30,10);
    return 0;
}