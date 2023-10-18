#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;
int main()
{
    char str1[50];
    cout << "\nType any string in Upper case : ";
    gets(str1);
    cout << "\n Converted the Source string " << str1 << " into Upper Case is " << strlwr(str1);
	return 0;
}