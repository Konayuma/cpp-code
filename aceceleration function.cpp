#include <iostream>
using namespace std;

double findAcceleration (double initial_v, double final_v, double time)
{
    double findAcceleration = (final_v - initial_v)/time;
    return findAcceleration;
}

int main()
{
    double acceleration, initial_v, final_v, time;
    cout << "Enter the initial velocity: ";
    cin >> initial_v;
    cout << "Enter the final velocity: ";
    cin >> final_v;
    cout << "Enter the time: ";
    cin >> time;
    acceleration = findAcceleration(initial_v, final_v, time);
    cout << "Acceleration= " << acceleration;
}
