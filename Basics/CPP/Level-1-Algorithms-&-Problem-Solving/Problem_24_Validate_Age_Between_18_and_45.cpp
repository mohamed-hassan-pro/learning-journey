#include <iostream>
using namespace std;
int main()
{
    short Age;
    cout << "Enter Age: ";
    cin >> Age;
    if (Age >= 18 && Age <= 45)
    {
        cout << endl
             << "Valid Age";
    }
    else
    {
        cout << endl
             << "Invalid Age";
    }
    return 0;
}