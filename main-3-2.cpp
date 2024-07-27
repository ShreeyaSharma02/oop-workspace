int main() {
    int arr1[] = {3, 5, 2, 1, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {6, 1, 8, 2, 4, 3};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    std::cout << "Median of arr1: " << median_array(arr1, size1) << std::endl; // Should return 3
    std::cout << "Median of arr2: " << median_array(arr2, size2) << std::endl; // Should return 0 because size is even

    return 0;
}