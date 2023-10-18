#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float basic, da, hra, gpf, tax, gross, np;
    char name[30];
    cout << "Enter Basic Pay : ";
    cin >> basic;
    cout << "\nENter D.A : ";
    cin >> da;
    cout << "\nEnter H.R.A : ";
    cin >> hra;
    gross = basic + da + hra;  //sum of basic,da and hra
    gpf = (basic + da) * 0.10; //10% of basic and da
    tax = gross * 0.10;        // 10% of gross pay
    np = gross - (gpf + tax);  //netpay = earnnings - deductions
    cout << setw(25) << "Basic Pay  : " << setw(10) << basic << endl;
    cout << setw(25) << "Dearness Allowance  : " << setw(10) << da << endl;
    cout << setw(25) << "House Rent Allowance  : " << setw(10) << hra << endl;
    cout << setw(25) << "Gross Pay  : " << setw(10) << gross << endl;
    cout << setw(25) << "G.P.F  : " << setw(10) << gpf << endl;
    cout << setw(25) << "Income Tax  : " << setw(10) << tax << endl;
    cout << setw(25) << "Net Pay  : " << setw(10) << np << endl;
    return 0;
}