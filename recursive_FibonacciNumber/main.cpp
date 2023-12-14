#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    cout << "Enter a nonnegative integer n: ";
    cin >> n;

    if (n < 0) {
        cout << "Try again! n must be a nonnegative integer." << endl;
        return 1;
    }

    int result = fibonacci(n);

    cout << "Fibonacci(" << n << ") = " << result << endl;

    return 0;
}
