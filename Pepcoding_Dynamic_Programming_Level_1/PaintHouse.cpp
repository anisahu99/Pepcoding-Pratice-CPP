#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int house[n][3];
    long long dp[n][3];
    dp[0][0]=house[0][0];
    dp[0][1]=house[0][1];
    dp[0][2]=house[0][2];
    for(int i=0;i<n;i++){
        dp[i][0]=dp[i][0]+min(dp[i-1][1],dp[i-1][2]);
        dp[i][1]=dp[i][1]+min(dp[i-1][0],dp[i-1][2]);
        dp[i][2]=dp[i][2]+min(dp[i-1][0],dp[i-1][1]);
    }
    cout<<min(dp[n-1][0],min(dp[n-1][1],dp[n-1][2]));
return 0;
}