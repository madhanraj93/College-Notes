#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;
int main()
{
    char str1[50];
    cout << "\nType any string in Lower case : ";
    gets(str1);
    cout << "\nConverted the Source string " << str1 << " into Upper Case is " << strupr(str1);
    return 0;
}