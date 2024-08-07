#include <iostream>
using namespace std;
int arrayMin(){
    double a[]={1.0,2.0,3.0};
    for (int i=0,i<a,i++){
        int *b=&a;
        int c=sizeof(*b);
        int smallest_value={};
        if(i<a){
            smallest_value=+i;
        }
        cout<< "the minimum value is"<< smallest_value<<endl;
    }
    return 0;
}