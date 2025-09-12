#include <iostream>
using namespace std;
struct stInfo
{
    short Age;
    bool DriverLicense;
};
void ReadInfo(stInfo Info)
{
    cout << endl
         << "Enter Age: ";
    cin >> Info.Age;
    cout << endl
         << "Enter Driver License(True=1, False=0): ";
    cin >> Info.DriverLicense;
};
void CheckYourInfo(stInfo Info)
{
    if ((Info.Age) >= 21 && (Info.DriverLicense == 1))
    {
        cout << endl
             << "Hired";
    }
    else
    {
        cout << endl
             << "Rejected";
    }
};
int main()
{
    stInfo Info;
    ReadInfo(Info);
    CheckYourInfo(Info);
    return 0;
}