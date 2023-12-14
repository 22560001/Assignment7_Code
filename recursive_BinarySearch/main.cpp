#include <iostream>

using namespace std;

int binarySearch(int arr[], int i, int j, int x) {
    if (i <= j) {
        int m = (i + j) / 2;

        if (arr[m] == x) {
            return m + 1;
        } else if (x < arr[m] && i < m) {
            return binarySearch(arr, i, m - 1, x);
        } else if (x > arr[m] && j > m) {
            return binarySearch(arr, m + 1, j, x);
        }
    }

    return 0;
}

int main() {
    int arr[] = {21, 12, 144, 69, 79, 88, 999};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 999;

    int result = binarySearch(arr, 0, n - 1, x);

    if (result != 0) {
        cout << "Element found at position: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
