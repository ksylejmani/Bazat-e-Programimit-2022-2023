#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int m=3,n=5;
    int a[m][n]={{10,10,8,5,8},
                 {6,5,10,10,9},
                 {10,5,10,7,10}};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<setw(4)<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]%2==0)
                a[i][j]=-1;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<setw(4)<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}