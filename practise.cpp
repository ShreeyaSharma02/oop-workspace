#include<iostream>
using namespace std;
int main(){
    double a=90.0;
    char c='j';
    double* b;
    char* d;
    b=&a;
    d=&c;
    cout<<"value a: and c"<<a<<", "<<c<<endl;
    cout<<"value b: and d"<<*b<<" ,"<<*d<<endl;
    return 0;
}