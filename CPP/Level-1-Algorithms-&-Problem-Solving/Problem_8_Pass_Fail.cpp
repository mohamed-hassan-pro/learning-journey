#include <iostream>
using namespace std;
int main()
{
    float Mark;
    cout << "Enter Mark: ";
    cin >> Mark;
    if (Mark >= 50)
    {
        cout << endl
             << "PASS";
    }
    else
    {
        cout << endl
             << "Fail";
    }
    return 0;
}