#include <iostream>
int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int number = 2;

    std::cout << "Number of elements equal to " << number << ": " << num_count(arr, size, number) << std::endl;

    return 0;
}