#include <iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int a1[r][c],a2[r][c],sum[r][c];
    for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
            cin>>a1[row][col];
        }
    }
    for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
            cin>>a2[row][col];
        }
    }
    for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
            sum[row][col]=a1[row][col]+a2[row][col];
        }
    }
    for(int row=0;row<r;row++){
        cout<<endl;
        for(int col=0;col<c;col++){
            cout<<sum[row][col]<<" ";
        }
    }
    return 0;
}