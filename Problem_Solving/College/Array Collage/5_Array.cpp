#include <iostream>
using namespace std;
int main(){
    int s;
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    for(int i=0;i<s;i++){
        //نقارن كل عنصر باللي بعده
        for(int k=i;k<s;k++){
            if(a[k]<a[i])
            //نبدل
            {
                int x=a[i];
                a[i]=a[k];
                a[k]=x;
            }
        }
    }
    cout<<"Elements of array in sorted ascending order: ";
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}