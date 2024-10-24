#include<iostream>
#include"GameObject.h"
#include"Utility.h"
#include"Effect.h"
using namespace std;
int main(){
    auto pos1=Utility::randomPosition(10,10);
    auto pos2=Utility::randomPosition(10,10);
    cout<<"first "<<std::get<0>(pos1)<<"scecond "<<std::get<1>(pos2)<<endl;
    double distance=Utility::distanceBetween(pos1,pos2);
    cout<<"distance"<<distance<<endl;
    return 0;
}