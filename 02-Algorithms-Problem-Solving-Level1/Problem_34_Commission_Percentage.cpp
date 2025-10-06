#include <iostream>
using namespace std;
int main()
{
    double TotalSales;
    cout << "Enter the Total Sales: ";
    cin >> TotalSales;

    if (TotalSales > 1000000)
    {
        cout << TotalSales * 0.1;
    }
    else if (TotalSales > 500000 && TotalSales < 1000000)
    {
        cout << TotalSales * 0.2;
    }
    else if (TotalSales > 100000 && TotalSales < 500000)
    {
        cout << TotalSales * 0.3;
    }
    else if (TotalSales > 50000 && TotalSales < 100000)
    {
        cout << TotalSales * 0.5;
    }
    else
    {
        cout << 0;
    }
    return 0;
}