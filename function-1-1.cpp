#include <iostream>
using namespace std;
int arrayMin(){
    double a[]={1.0,2.0,3.0};
    for (int i=0;i<3;i++){
        double *b=a;
        int c=sizeof(*b);
        int smallest_value={};
        if(a[1]<a[i+1]){
            smallest_value=+a[i];
        }
        cout<< "the minimum value is"<< smallest_value<<endl;
    }
    return 0;
}