#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int arg;
    cout << "Enter the number of terms: ";
    cin >> arg;
    cout << "Fibonacci series up to " << arg << " terms: ";
    for(int i = 0; i < arg; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}