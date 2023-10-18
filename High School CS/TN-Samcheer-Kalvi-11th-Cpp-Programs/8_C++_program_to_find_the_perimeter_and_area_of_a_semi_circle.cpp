#include <iostream>
using namespace std;

int main()
{
    int radius;
    float pi = 3.14;
    cout << "\nEnter Radius (in cm) : ";
    cin >> radius;
    float perimeter = (pi + 2) * radius;     //dynamic initialization
    float area = (pi * radius * radius) / 2; //dynamic initialization
    cout << "\nPerimeter of the semicircle is " << perimeter << "cm";
    cout << "\nArea of the semicirle is " << area << "sq.cm";
    return 0;
}