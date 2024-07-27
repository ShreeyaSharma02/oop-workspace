int main() {
    int arr1[] = {1, 2, 1, 4, 1, 3};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {3, 5, 2, 2, 5, 3, 3};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    std::cout << "Weighted average of arr1: " << weighted_average(arr1, size1) << std::endl; // Should return 3.0
    std::cout << "Weighted average of arr2: " << weighted_average(arr2, size2) << std::endl; // Example with another array

    return 0;
}