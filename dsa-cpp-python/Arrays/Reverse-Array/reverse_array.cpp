#include <iostream>
using namespace std;

void reverse_array(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }

    cout << "Reversed Array: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {10, 15, 11, 10, 30, 14, 9};

    int size = sizeof(arr) / sizeof(arr[0]);

    reverse_array(arr, size);

    return 0;
}