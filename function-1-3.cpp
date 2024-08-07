#include<iostream>
using namespace std;
int duplicateArray(){
    double a={1.0,2.0,3.0};
    double newArray={};
    for(int i=0,i<a,i++){
        int *b=&a;
        int c=sizeof(a);
        newArray={newArray, i(a)};
    }
    cout<<"the new array is"<<newArray<<endl;
    return 0;
}