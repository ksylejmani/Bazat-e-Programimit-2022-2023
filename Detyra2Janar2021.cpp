#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Cakto a dhe b: ";
    cin>>a>>b;
    if(a>b){
        cout<<"Numri "<<a<<" eshte me i madh se numri "
        <<b<<".\n";
    }
    else if(b>a){
        cout<<"Numri "<<b<<" eshte me i madh se numri "
        <<a<<".\n";
    }
    else{
        cout<<"Numrat "<<a<<" dhe "<<b<<
        " jane te barabarte.\n";
    }
    return 0;
}