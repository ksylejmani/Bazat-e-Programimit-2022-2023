#include<iostream>
using namespace std;
int main(){
    const int m=8;
    int v[m];
    cout<<"Cakto anetaret e vargut:\n";
    for(int i=0;i<m;i++){
        cout<<"v["<<i+1<<"]: ";
        cin>>v[i];
    }
    for(int i=0;i<m;i++){
        if(v[i]<0){
            cout<<"Vargu ka elemente negative."<<endl;
            break;
        }
    }
    return 0;
}