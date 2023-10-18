#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char target[50] = "Learning C++ is fun";
    char source[50] = ", Easy and Very useful";
    strcat(target, source);
    cout << target;
    return 0;
}