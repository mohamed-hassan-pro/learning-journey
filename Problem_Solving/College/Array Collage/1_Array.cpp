#include <iostream>
using namespace std;
int main(){
    int s;
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    for(int i=s-1;i>=0;i--){
        cout<<a[i];
        if(i!=0)
        cout<<" ";
    }
    return 0;
}