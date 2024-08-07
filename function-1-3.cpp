#include<iostream>
using namespace std;
int duplicateArray(){
    double a[3]={1.0,2.0,3.0};
    double newArray={};
    for(int i=0;i<3;i++){
        int *b=a;
        int c=sizeof(a);
        newArray={newArray, a[i]};
    }
    cout<<"the new array is"<<newArray<<endl;
    return 0;
}