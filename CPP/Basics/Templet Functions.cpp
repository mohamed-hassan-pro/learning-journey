#include <iostream>
using namespace std;
// Function A: Add Two Numbers
int add(int x, int y)
{
    return x + y;
}
//_________________________________________________

// Function B: Print Numbers from 1 to N
void printFrom1ToN(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i;
        if (i != n)
            cout << " ";
    }
}
//_________________________________________________

// Function C-1: Check if number is odd
bool isOdd(int n)
{
    return n % 2 == 1;
}
//_________________________________________________

// Function C-2: Convert Integer to Binary Representation (as number)
int toBinary(int n)
{
    int result = 0, place = 1;
    while (n > 0)
    {
        int bit = n % 2;
        result += bit * place;
        place *= 10;
        n /= 2;
    }
    return result;
}
//_________________________________________________

// Function C-3: Check if Binary Representation is Palindrome
bool isBinaryPalindrome(int n)
{
    int original = n, reversed = 0;
    while (n > 0)
    {
        reversed = (reversed << 1) | (n & 1);
        n >>= 1;
    }
    return original == reversed;
}
//_________________________________________________

// Function D: Check if Number is Prime
bool isPrime(int N)
{
    if (N <= 1)
        return false;
    for (int i = 2; i * i <= N; i++)
    {
        if (N % i == 0)
            return false;
    }
    return true;
}
//_________________________________________________

// Function E: Swap Two Numbers
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
//_________________________________________________

// Function F-1: Power Function
int power(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}
//_________________________________________________

// Function F-2: Evaluate Equation
int equation(int x, int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i += 2)
    {
        if (i == 0)
            sum += (power(x, i) - 1);
        else
            sum += power(x, i);
    }
    return sum;
}
//_________________________________________________

// Function G: Find Min and Max in Array
void findMinMax(int arr[], int n, int &mn, int &mx)
{
    mn = mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < mn)
            mn = arr[i];
        if (arr[i] > mx)
            mx = arr[i];
    }
}
//_________________________________________________

// Function H: Print Character N Times
void printCharNTimes(int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        cout << c;
        if (i != n - 1)
            cout << " ";
    }
}
//_________________________________________________

// Function I-1: Swap Matrix Rows
void swapRows(int matrix[500][500], int x, int y, int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = matrix[x][i];
        matrix[x][i] = matrix[y][i];
        matrix[y][i] = temp;
    }
}
//_________________________________________________

// Function I-2: Swap Matrix Columns
void swapCols(int matrix[500][500], int x, int y, int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = matrix[i][x];
        matrix[i][x] = matrix[i][y];
        matrix[i][y] = temp;
    }
}
//_________________________________________________
// Function J: Calculate Average of Array Elements
double getAverage(double arr[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}
//_________________________________________________

// Function K: Shift Array to the Right X Times
void shiftRight(int arr[], int n, int x)
{
    x %= n; // نضمن أن عدد النقل أقل من حجم المصفوفة
    for (int i = 0; i < x; i++)
    {
        int last = arr[n - 1];
        for (int j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
}
//_________________________________________________

// Function L: Concatenate Two Arrays (B + A into C)
void concatArrays(int A[], int B[], int C[], int n)
{
    for (int i = 0; i < n; i++)
    {
        C[i] = B[i];
    }
    for (int i = 0; i < n; i++)
    {
        C[n + i] = A[i];
    }
}
//_________________________________________________

// Function M: Count Distinct Numbers in an Array
int countDistinct(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        bool isNew = true;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                isNew = false;
                break;
            }
        }
        if (isNew)
            count++;
    }
    return count;
}
//_________________________________________________

// Function N: Shift Zeros to the Right
void shiftZerosRight(int arr[], int n)
{
    int index = 0; // مكان الأرقام غير الصفرية
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[index++] = arr[i];
        }
    }
    while (index < n)
    {
        arr[index++] = 0;
    }
}
//_________________________________________________

// Function O-1: Get Maximum Number
int getMax(int arr[], int n)
{
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}
//_________________________________________________

// Function O-2: Get Minimum Number
int getMin(int arr[], int n)
{
    int minVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minVal)
            minVal = arr[i];
    }
    return minVal;
}
//_________________________________________________

// Function O-3: Count Prime Numbers in Array
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int countPrimes(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
            count++;
    }
    return count;
}
//_________________________________________________

// Function O-4: Count Palindrome Numbers in Array
bool isPalindrome(int num)
{
    int original = num, reversed = 0;
    while (num > 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed == original;
}

int countPalindromes(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPalindrome(arr[i]))
            count++;
    }
    return count;
}
//_________________________________________________

// Function O-5: Find Number with Maximum Divisors
int countDivisors(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }
    return count;
}

int maxDivisors(int arr[], int n)
{
    int maxCount = 0;
    int result = arr[0];
    for (int i = 0; i < n; i++)
    {
        int divisors = countDivisors(arr[i]);
        if (divisors > maxCount || (divisors == maxCount && arr[i] > result))
        {
            maxCount = divisors;
            result = arr[i];
        }
    }
    return result;
}
//_________________________________________________
