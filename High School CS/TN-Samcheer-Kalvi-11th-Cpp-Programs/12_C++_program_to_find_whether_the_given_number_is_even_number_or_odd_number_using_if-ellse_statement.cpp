#include <iostream>
using namespace std;

int main()
{
    int num, rem;
    cout << "\nEnter a number : ";
    cin >> num;
    rem = num % 2;
    if (rem == 0)
        cout << "\nThe given number " << num << " is Even";
    else
        cout << "\nThe given number " << num << " is Odd";
    return 0;
}