#include <iostream>
#include <cmath>
using namespace std;
float CircleArea(float bi, float Circumference)
{
    float CircleArea = pow(Circumference, 2) / (4 * bi);
    return CircleArea;
}
int main()
{
    const float bi = 3.14;
    float Circumference;
    cout << "enter the Circumference?\n";
    cin >> Circumference;
    cout << "Circle Area along the Circumference = " << floor(CircleArea(bi, Circumference));
    return 0;
}