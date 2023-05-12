#include<bits/stdc++.h>// 2nd Naive Solution for 32 bit number
#include<cstring>
using namespace std;
int main()
{//Best Solution
    int nums[]={51,57,51,57,63,38,57,63,63,51};
    int n=sizeof(nums)/sizeof(nums[0]);
    /* Initializing the array with 0. */
    int tn=INT_MAX,tnp1=0,tnp2=0;
    for(int i=0;i<n;i++){
        int cwtn=nums[i]&tn;
        int cwtnp1=nums[i]&tnp1;
        int cwtnp2=nums[i]&tnp2;
        tn=tn&(~cwtn);
        tnp1=tnp1|(cwtn);

        tnp1=tnp1&(~cwtnp1);
        tnp2=tnp2|(cwtnp1);

        tnp2=tnp2&(~cwtnp2);
        tn=tn|(cwtnp2);
    }
    cout<<tnp1;
    return 0;
}