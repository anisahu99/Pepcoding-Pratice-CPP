#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=9;
    int nums[n]={2,3,1,4,6,7,5,8,9};
    int k=2;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<=k;i++)
    pq.push(nums[i]);
    for(int i=k+1;i<n;i++){
        cout<<pq.top()<<endl;
        pq.pop();
        pq.push(nums[i]);
    }
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
return 0;
}