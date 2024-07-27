#include <iostream>
int main() {
    int arr[] = {3, 5, 2, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Minimum element: " << min_element(arr, size) << std::endl;

    return 0;
}