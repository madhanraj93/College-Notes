#include <iostream>
using namespace std;
int main()
{
    int a, b, largest;
    cout << "\nEnter any two numbers : ";
    cin >> a >> b;
    largest = (a > b) ? a : b;
    cout << "\nLagest Number : " << largest;
    return 0;
}