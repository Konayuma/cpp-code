#include <iostream>
#include <string>
using namespace std;

//complete the function
void add(int x, int y) {
    cout << x+y << endl;
}
//overload it to sum doubles
void add(double x, double y) {
    cout << x+y << endl;
}

int main() {

    //calling
    add(5,6);
    add(1.2, 6.5);

    return 0;
}
