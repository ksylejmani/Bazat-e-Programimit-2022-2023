#include<iostream>
using namespace std;
int main(){
    const int n=10;
    int d[n]={-22,9,0,4,11,5,-10,9,18,1};
    int a,b;
    cout<<"Cakto kufirin e poshtem: ";
    cin>>a;
    cout<<"Cakto kufirin e eperm: ";
    cin>>b;
    int max=d[a-1];
    int min=d[a-1];
    for(int i=a;i<b
    ;i++){
        if(d[i]>max){
            max=d[i];
            cout<<"Test\n";
        }
        else if(d[i]<min){
            min=d[i];
            cout<<"Prova"<<endl;
        }
    }
    cout<<"Vlera maksimale: "<<max<<endl;
    cout<<"Vlera minimale: "<<min<<endl;
    return 0;
}