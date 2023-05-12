#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int f(int arr[],int idx){
        if(idx==5)
    return INT_MIN;
    return std::max(arr[idx],f(arr,idx+1));
    }
/*void print(int arr[],int idx){
    int n=sizeof(arr)/sizeof(arr[0]);
    f(arr,idx,n);
    return;
    }*/
int main(){
    int arr[]={10,20,40,60,30};
   cout<<f(arr,0);
}