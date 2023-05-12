#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n=7,m=7;
    int nums1[n]={1,1,2,2,2,3,5},nums2[m]={1,1,1,2,2,4,5};
    unordered_map<int,int> map;
    for(int i=0;i<n;i++)
    map[nums1[i]]++;
    for(int i=0;i<m;i++){
        if(map.find(nums2[i])!=map.end()){
            v.push_back(nums2[i]);
            map.erase(nums2[i]);
        }
    }
    for(int val:v)
    cout<<val<<endl;
return 0;
}