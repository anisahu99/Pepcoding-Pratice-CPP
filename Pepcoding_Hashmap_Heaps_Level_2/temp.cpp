#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> ans;
    int n=16;
    int nums[n]={2,5,5,6,3,2,3,2,4,5,2,2,2,2,3,6};
    int k=4;
    unordered_map<int,int>m;
    int i=0;
    while(i<k-1){
        m[nums[i]]++;
        i++;
    }
    //here i becomes i=k-1;
    i--;
    int j=-1;
    while(i<n-1){
        i++;
        m[nums[i]]++;//acquire
        ans.push_back(m.size());//work
        j++;
        //release
         if(m[nums[j]]==1){
            m.erase(nums[j]);
        }
        else{
            m[nums[j]]--;
        }
    }
    for(int val:ans)
    cout<<val<<endl;
return 0;
}