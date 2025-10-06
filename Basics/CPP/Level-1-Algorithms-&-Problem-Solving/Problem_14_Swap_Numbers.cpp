#include <iostream>
using namespace std;
void SwapNumbers(float Num1, float Num2)
{
    float temp = Num1;
    Num1 = Num2;
    Num2 = temp;
    cout << Num1 << endl
         << Num2;
}

int main()
{
    float Num1, Num2;
    cout << "enter the first Number?\n";
    cin >> Num1;
    cout << "enter the second Number?\n";
    cin >> Num2;
    SwapNumbers(Num1, Num2);
    return 0;
}