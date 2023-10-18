#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "\nEnter week day number : ";
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "\n Sunday";
        break;
    case 2:
        cout << "\n Monday";
        break;
    case 3:
        cout << "\n Tuesday";
        break;
    case 4:
        cout << "\n Wednesday";
        break;
    case 5:
        cout << "\n Thursday";
        break;
    case 6:
        cout << "\n Friday";
        break;
    case 7:
        cout << "\n Saturday";
        break;
    default:
        cout << "\nWrong input..";
        break;
    }
    return 0;
}