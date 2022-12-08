#include<iostream>
using namespace std;
int main(){
    const int n=5;
    int notat[n]={2,1,2,1,3};
    // for(int i=5;i<n;i++){
    //     cout<<"Cakto noten "<<i+1<<": ";
    //     cin>>notat[i];
    // }
    // for(int i=0;i<n;i++){    
    //     cout<<notat[i];
    //     if(i<n-1)
    //         cout<<", ";
    // }
    int shuma=0;
    int numro=0;
    int prodhimi2=1;
    int pCift=1,pTek=1,difCiftTek;
    for(int i=0;i<n;i++){
        prodhimi2=prodhimi2*(notat[i]*notat[i]);
        if(notat[i]%2==0){    
            pCift=pCift*notat[i];
            shuma=shuma+notat[i];
            cout<<"Test"<<endl;
            numro++;        
        }
        else{
            pTek=pTek*notat[i];
        }
    }
    difCiftTek=pCift-pTek;
    double mes=shuma/(float)numro;
    cout<<"\nShuma: "<<shuma<<endl;
    cout<<"Mesatarja: "<<mes<<endl;
    cout<<"Prodhimi i katroreve: "<<prodhimi2<<endl;
    cout<<"Differenca: "<<difCiftTek<<endl;
    return 0;
}