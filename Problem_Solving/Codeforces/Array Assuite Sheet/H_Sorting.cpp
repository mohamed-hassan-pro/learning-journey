#include <iostream>
#include <algorithm> // Needed for the sort() function | مطلوب علشان نستخدم الدالة sort
using namespace std;

int main()
{
    int N;
    cin >> N; // Read the number of elements | قراءة عدد العناصر

    int A[N]; // Declare an array A of size N | تعريف مصفوفة A بحجم N

    for (int i = 0; i < N; i++)
    {
        cin >> A[i]; // Input each element of the array | إدخال عناصر المصفوفة
    }

    // Sort the array in ascending order | ترتيب العناصر تصاعديًا
    // sort(start_pointer, end_pointer) → end_pointer is exclusive | النهاية مش بتدخل في الترتيب
    sort(A, A + N); // Sort from A[0] to A[N-1] | ترتيب من أول عنصر لآخر واحد

    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " "; // Print each element after sorting | طباعة العناصر بعد الترتيب
    }

    return 0;
}
