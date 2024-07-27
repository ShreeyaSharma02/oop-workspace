#include <iostream>
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {5, 4, 3, 2, 1};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[] = {1, 3, 2, 4, 5};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    std::cout << "Array 1 is ascending: " << (is_ascending(arr1, size1) ? "true" : "false") << std::endl;
    std::cout << "Array 2 is ascending: " << (is_ascending(arr2, size2) ? "true" : "false") << std::endl;
    std::cout << "Array 3 is ascending: " << (is_ascending(arr3, size3) ? "true" : "false") << std::endl;

    return 0;
}