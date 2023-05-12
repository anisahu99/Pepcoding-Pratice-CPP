#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int f(int arr[],int idx,int data){
    if(idx==10)
    return idx;
    if(arr[idx]==data){
    return f(arr,idx+1,data);
    }
    else{
        return f(arr,idx+1,data);
    }
}
/*void print(int arr[],int idx){
    int n=sizeof(arr)/sizeof(arr[0]);
    f(arr,idx,n);
    return;
    }*/
int main(){
    int arr[]={2,3,9,8,7,6,4,12,7,3,8};
   cout<<f(arr,0,8);
}