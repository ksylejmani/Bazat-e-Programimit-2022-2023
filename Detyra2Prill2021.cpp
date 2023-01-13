#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Cakto a dhe b: ";
    cin>>a>>b;
    int min=(a<b)?(a):(b);
    int max=(a>b)?(a):(b);
    int i=max;
    while (i>=min)
    {
        cout<<i;
        if(i!=min)
            cout<<", ";
        i--;
    }
    cout<<endl;
    return 0;
}