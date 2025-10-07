#include <iostream>
using namespace std;
void Factorial (int n){
    int f=1;
    for(int i=n;i>0;i--){
        f*=i;
    }
    cout<<f;
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Factorial(num);
    return 0;
}