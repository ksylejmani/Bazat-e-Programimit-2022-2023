#include<iostream>
#include<string>
using namespace std;
struct Qyteti
{
    string Emri, Shteti;
    int nrBanoreve;
    void lexo(int indeksi);
    void shtyp();
};

int main(){
    Qyteti q1, q2;
    q1.lexo(1);
    q2.lexo(2);
    if(q1.nrBanoreve>q2.nrBanoreve){
        q1.shtyp();
    }
    else if(q1.nrBanoreve==q2.nrBanoreve){
        cout<<"Te dy qytetet kane numer te barabarte te banoreve.\n";
    }
    else{
        q2.shtyp();
    }
    return 0;
}
void Qyteti::lexo(int indeksi){
    cout<<"Te caktohen shenimet per qytetin "<<indeksi<<endl;
    cout<<"Cakto emrin: ";
    cin>>Emri;
    cout<<"Cakto shtetin: ";
    cin>>Shteti;
    cout<<"Cakto numrin e banoreve: ";
    cin>>nrBanoreve;
}

void Qyteti::shtyp(){
    cout<<"Te dhenat per qytetin "<<endl;
    cout<<"Emri: "<<Emri<<endl;
    cout<<"Shteti: "<<Shteti<<endl;
    cout<<"Numri i banoreve: "<<nrBanoreve<<endl;
}
