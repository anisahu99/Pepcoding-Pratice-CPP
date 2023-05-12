#include<bits/stdc++.h>// 2nd Naive Solution for 32 bit number
#include<cstring>
using namespace std;
int main()
{
    int nums[]={51,57,51,57,63,38,57,63,63,51};
    int n=sizeof(nums)/sizeof(nums[0]);
    /* Initializing the array with 0. */
    int MaxNumber=-1;
    for(int i=0;i<n;i++){
        if(nums[i]>MaxNumber){
            MaxNumber=nums[i];
        }
    }
    int SetBit=0;
    while(MaxNumber>0){
        SetBit++;
        MaxNumber=MaxNumber-(MaxNumber&-MaxNumber);
    }
    //Section 1 of code 
    int v[SetBit];
    memset(v,0,sizeof(v));
    for(int j=0;j<SetBit;j++){
        for(int i=0;i<n;i++){
            if(nums[i]&(1<<j)){
                v[j]++;
            }
        }
    }
    int number=0;
    for(int k=0;k<SetBit;k++){
    if(v[k]%2==1){
        /* Adding the power of 2 to the number. */
        number=number+(1<<k+1);
    }
    }
    cout<<number;
    return 0;
}