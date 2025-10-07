#include <iostream>
using namespace std;
void power (int a,int b){
    int f=1;
    for(int i=0;i<b;i++){
        f*=a;
    }
    cout<<f;
}
int main(){
    int a,b;
    cin>>a>>b;
    power(a,b);
    return 0;
}