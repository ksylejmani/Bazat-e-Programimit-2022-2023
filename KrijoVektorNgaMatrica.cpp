#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int m=3,n=5;
    int a[m][n]={{5,5,8,5,8},
                 {6,5,10,10,9},
                 {10,5,10,7,10}};
    int k=-1;
    int b[m*n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>5){
                k++;
                b[k]=a[i][j];
            }
        }
    }
    for(int i=0;i<=k;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}