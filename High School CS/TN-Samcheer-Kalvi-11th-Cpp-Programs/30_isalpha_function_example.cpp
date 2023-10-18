#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;
int main()
{
    char ch;
    cout << "\n Enter a character : ";
    ch = getchar();
    cout << "\n The Return Value of isalpha(ch) is : " << isalpha(ch);
}