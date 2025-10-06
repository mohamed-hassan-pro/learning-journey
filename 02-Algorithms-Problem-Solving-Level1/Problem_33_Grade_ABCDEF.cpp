#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number <= 100 && number >= 90)
    {
        cout << "A";
    }
    else if (number <= 89 && number >= 80)
    {
        cout << "B";
    }
    else if (number <= 79 && number >= 70)
    {
        cout << "C";
    }
    else if (number <= 69 && number >= 60)
    {
        cout << "D";
    }
    else if (number <= 59 && number >= 50)
    {
        cout << "E";
    }
    else
    {
        cout << "F";
    }
    return 0;
}