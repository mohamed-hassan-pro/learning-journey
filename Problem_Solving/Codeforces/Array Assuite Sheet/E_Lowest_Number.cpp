// ✨ أصغر عنصر ومكانه
// فكرة: نمر على المصفوفة ونقارن كل عنصر بالـ min الحالي، ونحدث الـ min والـ position
// ملاحظات: بدأنا بـ A[0]، والمكان (position) محسوب من 1 مش من 0
// مفاهيم: Array + Loop + Condition + Indexing
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    } // 123
    int min = A[0], position = 1;
    for (int i = 1; i < N; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
            position = i + 1;
        }
    }
    cout << min << " " << position;
    return 0;
}