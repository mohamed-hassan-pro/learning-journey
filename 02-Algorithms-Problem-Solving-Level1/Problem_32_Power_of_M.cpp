#include <iostream>
#include <cmath>
using namespace std;
double NumberPowerM(float Number, float Power)
{
    float NumberPowerM = pow(Number, Power);
    return NumberPowerM;
}
int main()
{
    float Number, Power;
    cout << "enter the Number?\n";
    cin >> Number;
    cout << "enter the Power?\n";
    cin >> Power;
    cout << Number << " Power " << Power << " = " << round(NumberPowerM(Number, Power));
    return 0;
}