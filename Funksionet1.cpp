#include<iostream>
using namespace std;
int shuma(int a, int b, int c);//Hapi i pare
int main(){
    int x,y,z;
    cout<<"Cakto x, y dhe z: ";
    cin>>x>>y>>z;
    int s=shuma(x,y,z); // Hapi i trete
    cout<<"Shuma: "<<s<<endl;
    int s2=shuma(3,7,4);
    cout<<"Shuma2: "<<s2<<endl;
    return 0;
}
int shuma(int a, int b, int c){ // Hapi i dyte
    int rez=0;
    for(int i=a;i<=b;i++){
        if(i==c){
            continue;
        }
        else{
            rez+=i;
        }
    }
    return rez;
}