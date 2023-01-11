#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0;
        vector<int> c;
        c.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=c[i-1]){
                int inc=c[i-1]-nums[i]+1;
                c.push_back(inc+nums[i]);
                ans+=inc;
            }
            else{
                c.push_back(nums[i]);
            }
            cout<<c[i-1]<<endl;
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> nums = {1,5,2,4,1};
    cout<<s.minOperations(nums)<<endl;
    return 0;
}