#include <iostream>
#include <cmath>

int median_array(int array[], int n){

    if(n < 1 || n % 2 == 0){
        return 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
           
            if(array[j] < array[i]){
                int temp_value = array[i];
                array[i] = array[j];
                temp_value = array[j];
                
            }
        }
    }

    int median_element = ceil(n/2); // Defining the median element

    int median_value = array[median_element];// Defining the median value

    return median_value;
}