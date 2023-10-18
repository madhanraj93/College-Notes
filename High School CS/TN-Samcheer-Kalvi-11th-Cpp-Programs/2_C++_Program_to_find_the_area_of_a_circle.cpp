#include <iostream>
using namespace std;

int main()
{
    int radius;
    float area;
    cout << "Enter The Radius : ";
    cin >> radius;
    area = 3.14 * radius * radius;
    cout << "The area of circle : " << area;
    return 0;
}