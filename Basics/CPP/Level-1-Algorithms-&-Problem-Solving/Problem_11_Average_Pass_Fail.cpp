#include <iostream>
using namespace std;
void ReadMarks(float &Mark1, float &Mark2, float &Mark3)
{
    cout << "Enter Mark1: ";
    cin >> Mark1;
    cout << "Enter Mark2: ";
    cin >> Mark2;
    cout << "Enter Mark3: ";
    cin >> Mark3;
};
void CakculatAvg(float Mark1, float Mark2, float Mark3, float &avg)
{
    avg = (Mark1 + Mark2 + Mark3) / 3;
    cout << avg;
};
void CheckAvg(float Avg)
{
    if (Avg >= 50)
    {
        cout << endl
             << "PASS";
    }
    else
    {
        cout << endl
             << "Fail";
    }
};
int main()
{
    float Mark1, Mark2, Mark3, avg;
    ReadMarks(Mark1, Mark2, Mark3);
    CakculatAvg(Mark1, Mark2, Mark3, avg);
    CheckAvg(avg);
    return 0;
}