#include <iostream>
using namespace std;
int array_sum(int array[], int n){
    int arraysum=0;
    for(int i=0;i<n;i++){
        arraysum+=array[i];
        n=i+1;
        if(n<1){
            return 0;
        }
    }
    cout << "arraysum" << arraysum << endl;
    cout<< "elements sum" << n <<endl;
    
return 0;
}
