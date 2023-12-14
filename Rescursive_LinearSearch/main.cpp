#include <iostream>

using namespace std;

int search(int arr[], int i, int j, int x) {
    if (arr[i] == x) {
        return i + 1;
    } else if (i == j) {
        return 0;
    } else {
        return search(arr, i + 1, j, x);
    }
}

int main() {
    int arr[] = {10, 22, 88, 36, 63, 99, 100, 111, 121};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 33;

    int result = search(arr, 0, n - 1, x);

    if (result != 0) {
        cout << "Element found at position: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
