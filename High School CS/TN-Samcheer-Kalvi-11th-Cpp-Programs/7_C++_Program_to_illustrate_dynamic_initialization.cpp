#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "\n Enter Number 1 : ";
    cin >> num1;
    cout << "\n Enter Number 2 : ";
    cin >> num2;
    int sum = num1 + num2; // Dynamic initialization
    cout << "\n Average : " << sum / 2;
    return 0;
}