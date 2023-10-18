#include <iostream>
using namespace std;

int main()
{
    int num;
    int &temp = num; //declaration of a reference variable temp
    num = 100;
    cout << "\nThe value of num = " << num;
    cout << "\nThe value of temp = " << temp;
    return 0;
}