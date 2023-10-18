#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char source[] = "Computer Science";
    char target[20] = "target";
    cout << "\n String in Source Before Copied : " << source;
    cout << "\n String in Target Before Copied : " << target;
    strcpy(target, source);
    cout << "\n String in Target After strcpy function Executed : " << target;
    return 0;
}