#include<iostream>
using namespace std;
int main(){
    const int n=7;
    double notat[n]={9.2,6.8,7.4,8.8,10,9.5,9.9};
    // for(int i=0;i<n;i++){
    //     cout<<"Jepe noten "<<i+1<<": ";
    //     cin>>notat[i];
    // }
    double shuma=0,mes;
    bool fiton_cmim=false;
    int num_MVP=0;
    for(int i=0;i<n;i++){
        cout<<notat[i];
        if(i<n-1)
            cout<<", ";
        else
            cout<<endl;
        shuma=shuma+notat[i];//shuma+=notat[i];
        if(notat[i]==10)
            fiton_cmim=true;
        if(notat[i]>=9)
            num_MVP++;
    }
    cout<<"Shuma: "<<shuma<<endl;
    mes=shuma/n;
    cout<<"Mesatarja: "<<mes<<endl;
    cout<<"Lojtari fiton se paku nje cmim: "
        <<fiton_cmim<<endl;
    cout<<"Numri i MVP-ve: "<<num_MVP<<endl;
    return 0;
}