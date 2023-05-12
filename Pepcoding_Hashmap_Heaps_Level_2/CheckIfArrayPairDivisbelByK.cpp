#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=14;
    int nums[n]={77,22,56,20,11,45,34,78,29,23,55,60,65,75};
    int k=10;
    unordered_map<int,int> frem;
    for(int num:nums){
        int rem=num%k;
        frem[rem]++;
    }
    for(int num:nums){
        int rem=num%k;
        if(rem==0){
            if(frem[rem]%2!=0){
                cout<<"false";
                return 0;
            }
        }
        else if(2*rem==k){
            if(frem[rem]%2==1){
                cout<<"false";
                return 0;
            }
        }
        else{
            int newkx=k-rem;
            if(frem[newkx]!=frem[rem]){
                cout<<"false";
                return 0;
            }
        }
    }
    cout<<"true";
return 0;
}