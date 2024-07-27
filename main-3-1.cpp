#include <iostream>
int main() {
    int arr1[] = {1, 2, 3, 2, 1};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 4, 2};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[] = {1, 2, 1, 2, 1};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    int arr4[] = {1, 3, 5, 4, 2};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);

    std::cout << "Array 1 is fan array: " << (is_fanarray(arr1, size1) ? "true" : "false") << std::endl;
    std::cout << "Array 2 is fan array: " << (is_fanarray(arr2, size2) ? "true" : "false") << std::endl;
    std::cout << "Array 3 is fan array: " << (is_fanarray(arr3, size3) ? "true" : "false") << std::endl;
    std::cout << "Array 4 is fan array: " << (is_fanarray(arr4, size4) ? "true" : "false") << std::endl;

    return 0;
}