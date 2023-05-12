#include<bits/stdc++.h>
using namespace std;
int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        if(multipliers.size()==1&&nums.size()==1){
            return multipliers[0]*nums[0];
        }
        /*else if(multipliers.size()==1&&nums.size()>1){
            multipliers*nums[]
        }*/
        auto it1=nums.begin();
        int a=*it1;
        auto it2=nums.end()-1;
        int c=*it2;
        auto it3=multipliers.begin();
        int b=*it3;
        multipliers.erase(multipliers.begin());
        vector<int>nums2=nums;
        nums.erase(nums.begin());
        nums2.pop_back();
        int max1=maximumScore(nums,multipliers);
        int max2=maximumScore(nums2,multipliers);
        int max=max1>max2?max1:max2;
        return (a>c?max+(a*b):max+(c*b));

    }
int main()
{
return 0;
}