// C++ program to find the Curved Surface Area of a cylinder(CSA)(CSA=2pi_r*h
#include <iostream>
using namespace std;
int main()
{
    float pi = 3.4, radius, height, CSA;
    cout << "\nCurved Surface Area of a Cylinder";
    cout << "\nEnter Radius (in cm) : ";
    cin >> radius;
    cout << "\nEnter Height (in cm) : ";
    cin >> height;
    CSA = (2 * pi * radius) * height;
    system("cls");
    cout << "\nRadius : " << radius << "cm";
    cout << "\nHeight : " << height << "cm";
    cout << "\nCurved Surface Area of a Cylinder is " << CSA << " sq.cm.";
    return 0;
}