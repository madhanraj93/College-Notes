#include <iostream>
using namespace std;
int main()
{
    int i = 1, num, avg, sum = 0;
    while (i <= 5)
    {
        cout << "Enter the number : ";
        cin >> num;
        sum = sum + num;
        i++;
    }
    avg = sum / 5;
    cout << "The sum is " << sum << endl;
    cout << "The average is " << avg;
    return 0;
}