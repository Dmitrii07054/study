#include <iostream>

void bubble_sort(int* const arr, const int size) {
    for (int i = 0; i < size-1;  i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}

int main() {

    int n;
    std::cout << "введите длину массива: " << std::endl;
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "введите элементы массива: " << std::endl;

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    bubble_sort(arr, n);

    std::cout << "отсортированный массив: " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}
