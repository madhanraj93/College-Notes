#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char ch;
    cout << "\n Enter a Character : ";
    cin >> ch;
    cout << "\n The Return Value of isdigit(ch) is : " << isdigit(ch);
}