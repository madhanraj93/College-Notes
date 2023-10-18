#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;
int main()
{
    char ch;
    int r;
    cout << "\n Type a Character : ";
    ch = getchar();
    r = isalnum(ch);
    cout << "\nThe Return Value of isalnum(ch) is : " << r;
}