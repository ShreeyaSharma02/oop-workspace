int main() {
    int arr[] = {3, 5, 7, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Maximum element: " << max_element(arr, size) << std::endl;

    return 0;
}