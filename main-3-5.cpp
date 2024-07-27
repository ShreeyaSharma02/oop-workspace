int main() {
    double arr1[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    double arr2[] = {10.0, 20.0, 30.0, 40.0, 50.0, 60.0};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    std::cout << "Sum of even positions in arr1: " << sum_even(arr1, size1) << std::endl; // Should return 9.0 (1.0 + 3.0 + 5.0)
    std::cout << "Sum of even positions in arr2: " << sum_even(arr2, size2) << std::endl; // Should return 90.0 (10.0 + 30.0 + 50.0)

    return 0;
}