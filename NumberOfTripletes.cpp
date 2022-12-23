#include<iostream>
#include<vector>
using namespace std;
int arithmeticTriplets(int nums[],int m, int diff){
    int rez=0;
    for(int i=0;i<m-2;i++){
        for(int j=i+1;j<m-1;j++){
            for(int k=j+1;k<m;k++){
                if(nums[j]-nums[i]==diff && nums[k]-nums[j]==diff){
                    rez++;
                }
            }
        }
    }
    return rez;
}
int arithmeticTriplets(vector<int> nums, int diff){
    int rez=0;
    for(int i=0;i<nums.size()-2;i++){
        for(int j=i+1;j<nums.size()-1;j++){
            for(int k=j+1;k<nums.size();k++){
                if(nums[j]-nums[i]==diff && nums[k]-nums[j]==diff){
                    rez++;
                }
            }
        }
    }
    return rez;
}
int main(){
    const int m=6;
    vector<int> nums = {4,5,6,7,8,9};
    int diff = 2;
    cout<<"Number of triplets: "
        <<arithmeticTriplets(nums,diff)<<endl;
}