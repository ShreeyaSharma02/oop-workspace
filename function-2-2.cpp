#include <iostream>
int max_element(int array[], int n){
    if (n < 1){
        return 0;
    }
        int maximum = array[0];
        for (int i = 0; i<n; i++){
            if (array[i] > maximum) {
            maximum = array[i];
    }
    return maximum;    
}