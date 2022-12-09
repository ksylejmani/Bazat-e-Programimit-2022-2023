#include<iostream>
using namespace std;
int main(){

    const int m=8;
    int a[m]={400,	6,	1,	5,	6,	-3,	9,	2};
    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=m-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}