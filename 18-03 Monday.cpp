#include <iostream>

void changeValue(int &x) {  // '&' denotes that x is a reference to int
    x = 10;
}

int main() {
    int value = 5;
    changeValue(value);
    std::cout << value;  // Output will be 10, as the original value is modified inside the function.
    return 0;
}
