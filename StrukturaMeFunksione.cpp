#include<iostream>
#include<string>
using namespace std;
struct StrukturaMeFunksione
{
    int gjeje_indeksin_e_fundit(string teksti,char simboli);
    int numro_zanoret(char vargu[],int m);
};

int main(){
    StrukturaMeFunksione smf;
    // Problemi 'Find last occurance of simbol in text'
    string txt="eerdddidkdkdkidddrwq";
    char simboli='i';
    cout<<"Pozita e fundit te simbolit "
        <<simboli
        <<" eshte "
        << smf.gjeje_indeksin_e_fundit(txt,simboli)+1
        <<endl;

    // Problemi 'Find vowels in a text'
    const int m=10;
    char vargu[m]={'r','t','g','u','a','e','s','p','o','i'};
    cout<<"Numri i zanoreve eshte: "
        <<smf.numro_zanoret(vargu,m)<<endl;
    return 0;
}
int StrukturaMeFunksione::gjeje_indeksin_e_fundit(string teksti,char simboli){
    int rez=-1;
    for(int i=teksti.size()-1;i>=0;i--){
        if(teksti.at(i)==simboli){
            rez=i;
            break;
        }
    }
    return rez;
}
int StrukturaMeFunksione::numro_zanoret (char vargu[],int m){
    int rez=0;
    string zanoret="aeëiouy";
    for(int i=0;i<m;i++){
        for(int j=0;j<zanoret.size();j++){
            if(vargu[i]==zanoret[j]){
                rez++;
                break;
            }
        }
    }
    return rez;
}