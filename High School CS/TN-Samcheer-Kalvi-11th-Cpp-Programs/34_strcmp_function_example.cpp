#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char string1[] = "Computer";
    char string2[] = "Science";
    int result;
    result = strcmp(string1, string2);
    if (result == 0)
    {
        cout << "String1 : " << string1 << " and String2 : " << string2 << "are Equal";
    }
    if (result < 0)
    {
        cout << "String1 : " << string1 << " and String2 : " << string2 << " are Not Equal";
    }
}