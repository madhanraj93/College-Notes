#include <iostream>
using namespace std;
int main()
{
    int sales, commission;
    char grade;
    cout << "\n Enter Sales amount : ";
    cin >> sales;
    cout << "\nEnter Grade : ";
    cin >> grade;
    if (sales > 5000)
    {
        commission = sales * 0.10;
        cout << "\nCommision : " << commission;
    }
    else
    {
        commission = sales * 0.05;
        cout << "\nCommission : " << commission;
    }
    cout << "\nGood Job ...";
    return 0;
}