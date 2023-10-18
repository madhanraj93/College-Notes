#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "\nEnter your Age : ";
    cin >> age;
    if (age >= 18)
        cout << "\nYou are eligible for Vote ...";
    cout << "\nThis statement is always executed.";
    return 0;
}