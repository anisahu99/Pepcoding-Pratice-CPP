#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=8;
    int num[n]={2,10,5,17,7,18,6,4};
    int k=3;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        if(i<k){
            pq.push(num[i]);
        }
        else{
            if(num[i]>pq.top()){
                pq.pop();
                pq.push(num[i]);
            }
        }
    }
    while(!pq.empty()){
        cout<<pq.top()<<endl;;
        pq.pop();
    }
return 0;
}