#include <iostream>
using namespace std;
int main(){
    int s;
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++){
        cin>>a[i];
    }//10 15 25 30 20 
    int n;
    cout<<"Enter Num. (start from 1)";
    cin>>n;
    if(n<=s&&n>=1){
        for(int i=n-1;i<s-1;i++){
            a[i]=a[i+1];
        }
    }
    cout<<"The new list is: ";
    for(int i=0;i<s-1;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}