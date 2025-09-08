#include <iostream>
#include <cmath>
using namespace std;
double NumberPower2(float Number)
{
    float NumberPow2 = pow(Number, 2);
    return NumberPow2;
}
double NumberPower3(float Number)
{
    float NumberPow3 = pow(Number, 3);
    return NumberPow3;
}
double NumberPower4(float Number)
{
    float NumberPow4 = pow(Number, 4);
    return NumberPow4;
}
int main()
{
    float Number;
    cout << "enter the Number?\n";
    cin >> Number;
    cout << Number << " Power 2 = " << round(NumberPower2(Number)) << endl;
    cout << Number << " Power 3 = " << round(NumberPower3(Number)) << endl;
    cout << Number << " Power 4 = " << round(NumberPower4(Number));
    return 0;
}