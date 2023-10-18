#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter the Marks : ";
    cin >> marks;
    if (marks >= 60)
        cout << "Your grade is 1st class !!" << endl;
    else if (marks >= 50 && marks < 60)
        cout << "your grade is 2nd class !!" << endl;
    else if (marks >= 40 && marks < 50)
        cout << "your grade is 3rd class !!" << endl;
    else
        cout << "You are fail !!" << endl;
    return 0;
}