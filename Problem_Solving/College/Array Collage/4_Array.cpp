#include <iostream>
using namespace std;
int main(){
    int s;
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    cout<<"The Even elements are: ";
    for(int i=0;i<s;i++){
        if(a[i]%2==0)
        cout<<a[i]<<" ";
    }
    cout<<endl<<"The Odd elements are: ";
    for(int i=0;i<s;i++){
        if(a[i]%2!=0)
        cout<<a[i]<<" ";
    }
    return 0;
}