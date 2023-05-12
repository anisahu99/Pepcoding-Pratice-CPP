#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={9,2,7,5,6,23,24,22,23,19,17,16,18,39,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=0;
    for(int i=0;i<n-1;i++){
        unordered_set<int> s;
        int mn=arr[i];
        int mx=arr[i];
        s.insert(arr[i]);
        for(int j=i+1;j<n;j++){
            if(s.find(arr[j])!=s.end()){
                break;
            }
            s.insert(arr[j]);
            mn=min(mn,arr[j]);
            mx=max(mx,arr[j]);
            if(mx-mn==j-i){
                int len=j-i+1;
                if(len>ans){
                    ans=len;
                }
            }
        }
    }
    cout<<ans;
return 0;
}