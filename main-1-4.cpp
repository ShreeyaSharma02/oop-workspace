#include <iostream>
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    std::cout << "Sum of both arrays: " << sum_two_arrays(arr1, arr2, size) << std::endl;

    return 0;
}