#include <iostream>

double weighted_average(int array[], int n){

    int frequency[n]; // Initialising frequency array

    for(int i = 0; i < n; i++){

        int count = 0;// Initialising count variable

        for(int j = 0; j < n; j++){
            if(array[j] == array[i]){
                count++;
            }
        }
        frequency[i] = count;
    }

    double sum  = 0; // Initialising weighted sum variable

    for(int i = 0; i < n; i++){
        sum += array[i] *(frequency[i] / (double)n);
    }
       return sum;
}