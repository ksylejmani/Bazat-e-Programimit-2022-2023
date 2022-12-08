#include<iostream>
using namespace std;
int main(){
    const int m=3,n=5;
    int a[m][n]={{10,10,8,5,8},
                 {6,5,10,10,9},
                 {10,5,10,7,10}};
    bool f=false;
    int s=0;
    int k=0;    
    int num10=0;
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<"Cakto A["<<i+1<<"]["<<j+1<<"]: ";
    //         cin>>a[i][j];
    //     }
    // }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==5){
                continue;
            }
            else{
                s=s+a[i][j];
                k++;
            }
            if(a[i][j]==10)
                num10++;
        }
    }
    double mes=(double)s/(k);
    if(mes>=9)
        f=true;
    cout<<"Mesatarja: "<<mes<<endl;
    cout<<"Studenti fiton bursen: "<<f<<endl;
    cout<<"Numri i dhjetesheve: "<<num10<<endl;
    return 0;
}