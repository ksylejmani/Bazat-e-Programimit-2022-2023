#include<iostream>
#include<string>
#include<vector>
using namespace std;
void numro_paraqitjet(int num[],int m, string txt);
void shtyp(int a[], int n);
void shtyp(vector<int> a);
bool trego_paraqitjen_e_shkronjave(int num[],int m);
int numro_shkronjat_e_paparaqitura(int num[],int m);
vector<int> numro_paraqitjet(int m, string txt);
int main(){
    const int m=5;
    int num[m];
    string txt1="AACCDADA";
    numro_paraqitjet(num,m,txt1);
    cout<<"num=";
    shtyp(num,m);
    cout<<"Trego paraqitjen e shkronjave: "
        <<trego_paraqitjen_e_shkronjave(num,m)
        <<endl;
    cout<<"Numro shkronjat e paparaqitura: "
        <<numro_shkronjat_e_paparaqitura(num,m)
        <<endl;
    vector<int> rez=numro_paraqitjet(m,txt1);
    shtyp(rez);
    return 0;
}
void numro_paraqitjet(int num[],int m, string txt){
    for(int i=0;i<m;i++){
        num[i]=0;
    }
    for(int i=0;i<txt.size();i++){
        char shkronja=txt[i]; // txt.at(i)
        int indeksi=shkronja-'A'; // txt1="AACCDADA";
        num[indeksi]++; // {4,0,2,2,0}
    }
}
vector<int> numro_paraqitjet(int m, string txt){
    vector<int> rez;
    for(int i=0;i<m;i++){
        rez.push_back(0);
    }
    for(int i=0;i<txt.size();i++){
        char shkronja=txt[i]; // txt.at(i)
        int indeksi=shkronja-'A'; // txt1="AACCDADA";
        rez[indeksi]++; // {4,0,2,2,0}
    }
    return rez;
}
void shtyp(int a[], int n){
    cout<<"{";
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i!=n-1)
            cout<<", ";
    }
    cout<<"}"<<endl;
}
void shtyp(vector<int> a){
    cout<<"{";
    for(int i=0;i<a.size();i++){
        cout<<a[i];
        if(i!=a.size()-1)
            cout<<", ";
    }
    cout<<"}"<<endl;
}
bool trego_paraqitjen_e_shkronjave(int num[],int m){
    bool rez=true;
    for(int i=0;i<m;i++){
        if(num[i]==0){
            rez=false;
            break; // {4, 0, 2, 2, 0}
        }
    }
    return rez;
}
int numro_shkronjat_e_paparaqitura(int num[],int m){
    int rez=0;
    for(int i=0;i<m;i++){
        if(num[i]==0){
            rez++;
        }
    }
    return rez;
}