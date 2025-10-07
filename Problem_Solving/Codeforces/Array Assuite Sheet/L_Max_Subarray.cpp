#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T; // عدد الحالات

    while (T--)
    {
        int N;
        cin >> N; // عدد عناصر المصفوفة

        int A[100]; // حجم أقصى للمصفوفة حسب القيود

        for (int i = 0; i < N; i++)
        {
            cin >> A[i]; // إدخال عناصر المصفوفة
        }

        // نمر على كل Subarray ونحسب الـ maximum
        for (int i = 0; i < N; i++)
        {
            int currentMax = A[i]; // بداية كل subarray

            for (int j = i; j < N; j++)
            {
                if (A[j] > currentMax)
                    currentMax = A[j]; // نحدث الماكس لو لقينا أكبر

                cout << currentMax << " "; // نطبع الماكس في كل subarray
            }
        }

        cout << endl; // نهاية كل test case
    }

    return 0;
}
