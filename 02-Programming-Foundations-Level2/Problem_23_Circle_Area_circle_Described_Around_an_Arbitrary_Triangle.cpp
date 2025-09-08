#include <iostream>
#include <cmath>
using namespace std;
float area(float bi, float side1, float side2, float side3)
{
    float var = (side1 + side2 + side3) / 2;
    float area = bi * pow(((side1 * side2 * side3) / (4 * sqrt(var * (var - side1) * (var - side2) * (var - side3)))), 2);
    return area;
}
int main()
{
    float side1, side2, side3;
    const float bi = 3.14;
    cout << "ener the first side?\n";
    cin >> side1;
    cout << "ener the second side?\n";
    cin >> side2;
    cout << "ener the third side?\n";
    cin >> side3;
    cout << "area of arbitrary triangle = " << round(area(bi, side1, side2, side3));
}