#include <iostream>
using namespace std;
int main()
{
    int i, sum = 0, n;
    cout << "\nEnter The Value of n : ";
    cin >> n;
    i = 1;
    for (; i <= n;)
    {
        sum += i;
        ++i;
    }
    cout << "\nThe sum of 1 to " << n << " is " << sum;
    return 0;
}