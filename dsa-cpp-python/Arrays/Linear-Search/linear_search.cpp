#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[] = {1, 4, 9, 30, 10, 5, 4, 2};
    int target;

    cin >> target;

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << linearSearch(arr, size, target);

    return 0;
}