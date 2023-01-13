#include<iostream>
using namespace std;
int main(){
    const int m=10;
    int A[m];
    int count=0;
    int divider;
    cout<<"What is the value of the divider? ";
    cin>>divider;
    for(int i=0;i<m;i++){
        cout<<"Give value for A["<<i+1<<"]: ";
        cin>>A[i];
        if(A[i]%divider==0){
            count++;
        }
    }
    cout<<"Number of values that are dividible by "
        <<divider<<" is: "
        <<count<<endl;
    return 0;
}