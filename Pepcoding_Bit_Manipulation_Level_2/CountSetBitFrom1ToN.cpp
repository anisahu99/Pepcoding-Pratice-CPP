#include<bits/stdc++.h>
using namespace std;
int MaxPowerOf2ForN(int N){
    int x=0;
    while(x<=N){
        x++;
    }
    x--;
    return x;
}
int Solution(int N){
    if(N==0)
    return 0;
    int x=MaxPowerOf2ForN(N);
    int TotalSetBitFrom_1ToBeforeToThe2powerx=x*(1<<x-1);
    int TotalSetBiOfMSBFrom2power_xToN=N-(1<<x)+1;
    int RestNumberAfterLeavingTheMSB_From2power_xToN=(N-(1<<x));
    int Rest=RestNumberAfterLeavingTheMSB_From2power_xToN;
    int ans=TotalSetBitFrom_1ToBeforeToThe2powerx+TotalSetBiOfMSBFrom2power_xToN+Solution(Rest);
    return ans;
}
int main()
{
    int N=20;
    int ans=Solution(N);
    cout<<ans;
return 0;
}