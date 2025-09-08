#include <iostream>
#include <cmath>
using namespace std;
float CircleArea(float bi, float L)
{
    float CircleArea = (bi * pow(L, 2)) / 4;
    return CircleArea;
}
int main()
{
    // L = LengthOfSideOFSquare
    const float bi = 3.14;
    float L;
    cout << "enter the Length Of a Square Side?\n";
    cin >> L;
    cout << "Circle Area inscribed in a square = " << ceil(CircleArea(bi, L));
    return 0;
}