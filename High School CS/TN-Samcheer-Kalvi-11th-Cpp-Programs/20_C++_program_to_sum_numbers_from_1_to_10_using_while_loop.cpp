#include <iostream>
using namespace std;

int main()
{
    int i = 1, sum = 0;
    while (i <= 10)
    {
        sum = sum + i;
        i++;
    }
    cout << "The sum of 1 to 10 is " << sum;
    return 0;
}