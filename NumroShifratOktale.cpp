#include<iostream>
#include<string>
#include<math.h>
using namespace std;
enum grade{
    five,six, seven, eight,nine, ten
};
grade get_grade(int c1,int c2, int c3, int project, int attendance);
int shuma_e_shifrave_te_tekstit(string teksti);
void numro_paraqitjet(int frekuenca[], int m, string teksti);
int shnderro_ne_decimal(string teksti);
int main(){
    string teksti="75";
    cout<<"Shuma e shifrave te tekstit: "
        <<shuma_e_shifrave_te_tekstit(teksti)
        <<endl;
    const int m=8;
    int f[m];
    numro_paraqitjet(f,m,teksti);
    cout<<"Numri i paraqitjeve: "; 
    for(int i=0;i<m;i++){
        cout<<f[i]<<" "; // 2 1 2 1 1 0 1 0
    }
    cout<<endl;
    cout<<"Vlera ne decimal: "
        <<shnderro_ne_decimal(teksti)
        <<endl;
    cout<<"Grade is: "
        <<get_grade(30,25,15,5,5)
        <<endl;
    return 0;
}
int shuma_e_shifrave_te_tekstit(string teksti){
    int s=0;
    for(int i=0;i<teksti.size();i++){
        char simboli=teksti[i]; //teksti.at(i); 
        int vlera=simboli-'0';
        s=s+vlera;
        cout<<"Test\n";
    }
    return s;
}
void numro_paraqitjet(int frekuenca[], int m, string teksti){
    
    for(int i=0;i<m;i++){
        frekuenca[i]=0;
    }
    for(int i=0;i<teksti.size();i++){
        char simboli=teksti.at(i);
        int vlera=simboli-'0';
        frekuenca[vlera]++;
    }
}
int shnderro_ne_decimal(string teksti){
    int s=0;
    for(int i=teksti.size()-1;i>=0;i--){
        char shifra=teksti[i];
        int vlera=shifra-'0';
        s=s+vlera*pow(8,teksti.size()-i-1);
    }
    return s;
}
grade get_grade(int c1,int c2, int c3, int project, int attendance){
    grade ans;
    int points=c1+c2+c3+project+attendance;
    if(points>=90)
        ans=ten;
    else if(points>=80)
        ans=nine;
    else if(points>=70)
        ans=eight;
    else if(points>=60)
        ans=seven;
    else if(points>=50)
        ans=six;
    else
        ans=five;
    return ans;
}