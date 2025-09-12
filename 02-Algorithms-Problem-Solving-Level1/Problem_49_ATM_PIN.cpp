#include <iostream>
using namespace std;
int main()
{
    string PIN;
    cout << "Enter ATM PIN code: ";
    cin >> PIN;
    if (PIN == "1234")
    {
        cout << "Your Balance is: 7500";
    }
    else
    {
        cout << "Worng PIN";
    }
    return 0;
}