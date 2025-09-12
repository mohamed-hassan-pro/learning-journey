#include <iostream>
using namespace std;
struct strPersonInfo
{
    string FirstName;
    string LastName;
    short Age;
    string Phone;
};
void ReadInfo(strPersonInfo &Info)
{
    cout << "Enter First Name: ";
    cin >> Info.FirstName;
    cout << "Enter Last Name: ";
    cin >> Info.LastName;
    cout << "Enter Age: ";
    cin >> Info.Age;
    cout << "Enter Phone: ";
    cin >> Info.Phone;
};
void PrintInfo(strPersonInfo Info)
{
    cout << endl
         << "The First Name: " << Info.FirstName;
    cout << endl
         << "The Last Name: " << Info.LastName;
    cout << endl
         << "The Age: " << Info.Age;
    cout << endl
         << "The Phone: " << Info.Phone << endl;
};
void ReadPersonsInfo(strPersonInfo Persons[2])
{
    ReadInfo(Persons[0]);
    ReadInfo(Persons[1]);
};
void PrintPersonsInfo(strPersonInfo Persons[2])
{
    PrintInfo(Persons[0]);
    PrintInfo(Persons[1]);
};
int main()
{
    strPersonInfo Persons[2];
    ReadPersonsInfo(Persons);
    PrintPersonsInfo(Persons);
}