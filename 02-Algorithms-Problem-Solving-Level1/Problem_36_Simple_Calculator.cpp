#include <iostream>
using namespace std;
int main()
{
    double Number1, Number2;
    char OperationType;
    cout << "Enter a Number1: ";
    cin >> Number1;
    cout << "Enter the Operation Type: ";
    cin >> OperationType;
    cout << "Enter a Number2: ";
    cin >> Number2;
    /*if (OperationType == '+')
    {
        cout << Number1 + Number2;
    }
    else if (OperationType == '-')
    {
        cout << Number1 - Number2;
    }
    else if (OperationType == '*')
    {
        cout << Number1 * Number2;
    }
    else if (OperationType == '/')
    {
        cout << Number1 / Number2;
    }
    else
    {
        cout << "wrong Operation Type";
    }*/
    switch (OperationType)
    {
    case '+':
        cout << Number1 + Number2;
        break;
    case '-':
        cout << Number1 - Number2;
        break;
    case '*':
        cout << Number1 * Number2;
        break;
    case '/':
        cout << Number1 / Number2;
        break;
    default:
        cout << "wrong Operation Type";
        break;
    }
    return 0;
}