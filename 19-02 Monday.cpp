#include <iostream>
using namespace std;
//return type, name, parameter list, behaviour

double findArea(double radius)
{
    double area = (22/7)*radius*radius; //process
    return area;
}

int main()
{
    double radius;
    cout << "Enter radius";
    cin >> radius;
    double area = findArea(radius);
    cout << area;
}
