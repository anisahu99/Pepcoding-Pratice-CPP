#include<bits/stdc++.h>
using namespace std;
void printSolution(int arr[],int n){
    sort(arr,arr+n);
    int min=INT_MAX;
    vector<string> res;
    for(int i=0;i<n-1;i++){
        int XOR=arr[i]^arr[i+1];
        if(XOR<min){
            min=XOR;
            res.clear();
            res.push_back(arr[i]+","+arr[i+1]);
        }
        else if(XOR==min){
            res.push_back(arr[i]+","+arr[i+1]);
        }
    }
    for(string val:res)
    cout<<val<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
return 0;
}