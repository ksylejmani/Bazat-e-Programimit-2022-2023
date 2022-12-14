#include<iostream>
#include<vector>
int gjejCift(std::vector<int> A, int target);
int numerues=0;
int main(){
    std::vector<int> A={2,7,1,0,5,4,2};
    int target;
    std::cout<<"Jepe targetin: ";
    std::cin>>target; //target=5
    std::cout<<"Numri i cifteve me shumen "
            <<target<<" eshte: "
            <<gjejCift(A,target);
    std::cout<<"\nTest1: "<<numerues<<std::endl;
    return 0;
}
int gjejCift(std::vector<int> A, int target){
    int rez=0;
    for(int i=0;i<A.size()-1;i++){
        for(int j=i+1;j<A.size();j++){
            numerues++;
            if(A[i]+A[j]==target){//n*(n-1)/2
                rez++;
                std::cout<<"Prova\n";
                // std::cout<<A[i]<<" "<<A[j]<<std::endl;
                // return;
            }

        }
    }
    return rez;
}