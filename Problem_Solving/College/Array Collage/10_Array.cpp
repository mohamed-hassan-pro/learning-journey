#include <iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int a[r][c],sum;
    for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
            cin>>a[row][col];
        }
    }
    for(int row=0;row<r;row++){
        int sum=0;
        for(int col=0;col<c;col++){
            sum+=a[row][col];
        }
        cout<<"row"<<row+1<<": "<<sum<<endl;
    }
    for(int col=0;col<c;col++){
        int sum=0;
        for(int row=0;row<r;row++){
            sum+=a[row][col];
        }
        cout<<"col"<<col+1<<": "<<sum<<endl;
    }
    return 0;
}