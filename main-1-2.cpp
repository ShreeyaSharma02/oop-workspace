#include <iostream>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Average of all elements: " << array_mean(arr, size) << std::endl;

    return 0;
}