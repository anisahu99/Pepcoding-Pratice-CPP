#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    int house[n][c];
    int dp[n][c];
    for(int i=0;i<c;i++){
        dp[0][i]=house[0][i];
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<c;j++){
            int min=INT_MAX;
            for(int k=0;k<c;k++){
                if(k!=j){
                    if(dp[i-1][k]<min)
                    min=dp[i-1][k];
                }
            }
            dp[i][j]=house[i][j]+min;
        }
    }
    int min=INT_MAX;
    for(int i=0;i<c;i++){
        if(dp[n-1][i]<min)
        min=dp[n-1][i];
    }
    cout<<min;
return 0;
}