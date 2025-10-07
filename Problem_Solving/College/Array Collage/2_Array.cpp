#include <iostream>
using namespace std;
int main(){
    int s;
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    cout<<"The unique elements found in the array are: ";
    for(int i=0;i<s;i++){
        int count=0;
        for(int j=0;j<s;j++){
            if(a[i]==a[j])
            count++;
        }
        if(count==1)
        cout<<a[i]<<" ";
    }
    return 0;
}