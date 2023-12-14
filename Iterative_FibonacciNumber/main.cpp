#include <iostream>

using namespace std;

int iterativeFibonacci(int n) {
    if (n == 0) {
        return 0;
    } else {
        int x = 0;
        int y = 1;

        for (int i = 1; i < n; ++i) {
            int z = x + y;
            x = y;
            y = z;
        }

        return y;
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

    int result = iterativeFibonacci(n);

    cout << " the" << n << "th Fibonacci Number = " << result << endl;

    return 0;
}
