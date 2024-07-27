#include <iostream>
#include <cmath>

bool is_fanarray(int array[], int n) {
    if (n < 1) {
        return false; // Return false if n is less than 1
    }

    int mid_point = ceil(n/2.0);

    // Check for palindrome property
    for (int i = 0; i < mid_point; i++) {
        if (array[i] != array[n - 1 - i]) {
            return false; // If not equal, not a palindrome
        }
    }

    // Check for ascending order
    for (int i = 1; i < mid_point; ++i) {
        if (array[i] <= array[i - 1]) {
            return false;
        }
    }

    return true; 
}