#include <iostream>
using namespace std;
int main()
{
    int n = 1;
    jump:
    {
        if (n < 10)
        { // Control of the program move to jump:
            cout << n << '\t';
            n += 2;
            goto jump;
        }
        else
            return 0;
    }
}