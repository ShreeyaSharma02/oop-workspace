#include <iostream>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Sum of all elements: " << array_sum(arr, size) << std::endl;

    return 0;
}