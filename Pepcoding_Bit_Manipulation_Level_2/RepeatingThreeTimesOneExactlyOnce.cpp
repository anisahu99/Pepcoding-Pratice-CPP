#include<bits/stdc++.h>//Naive Solution for 32 bit number
#include<cstring>
using namespace std;
int main()
{
    int nums[]={51,57,51,57,63,38,57,63,63,51};
    int n=sizeof(nums)/sizeof(nums[0]);
    /* Initializing the array with 0. */
    int arr[32];
    memset(arr,0,sizeof(arr));
    /* Checking if the jth bit of the number is set or not. */
    for(int j=0;j<32;j++){
        for(int i=0;i<n;i++){
            /* Checking if the jth bit of the number is set or not. */
            if(nums[i]&(1<<j)){
                arr[j]++;
            }
        }
    }
    /* Finding the number which is occuring odd number of times. */
    int number=0;
    for(int k=0;k<32;k++){
    if(arr[k]%2==1){
        /* Adding the power of 2 to the number. */
        number=number+(1<<k+1);
    }
    }
    cout<<number;
    return 0;
}