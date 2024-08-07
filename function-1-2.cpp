#include<iostream>
using namespace std;
void modifyArray(){
    double a={1.0,2.0,3.0};
    double value={2.0};
    for (int i=0;i<3;i++){
        int *b=a;
        int c=sizeof(*b);
        int valueAdd={};
        value+=a[i];
        int valueAdd+={value};
    } 
    cout<<"the final value is"<< value<< endl;
}