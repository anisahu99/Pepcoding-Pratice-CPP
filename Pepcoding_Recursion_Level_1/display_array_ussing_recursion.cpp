#include<bits/stdc++.h>
using namespace std;
void f(int arr[],int idx){
        if(idx==4)
    return;
    f(arr,idx+1);
    cout<<arr[idx];
    return;
    }
/*void print(int arr[],int idx){
    int n=sizeof(arr)/sizeof(arr[0]);
    f(arr,idx,n);
    return;
    }*/
int main(){
    int arr[]={1,2,3,4};
   f(arr,0);
}