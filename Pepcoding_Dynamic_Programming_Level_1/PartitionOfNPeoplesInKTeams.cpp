#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    if(n==0||k==0||n<k){
    cout<<"0";
    return;
    }
    long long dp[k+1][n+1];
    for(int t=1;t<=k;k++){
        for(int p=1;p<=n;p++){
            if(p<k)
            dp[t][p]=0;
            else if(t==p)
            dp[t][p]=1;
            else{
                dp[t][p]=dp[t-1][p-1]+dp[t][p-1]*t;
            }
        }
    }
    cout<<dp[k][n];
return 0;
}
/*https://www.youtube.com/watch?v=IiAsqfjhZnY&list=PL-Jc9J83PIiG8fE6rj9F5a6uyQ5WPdqKy&index=29*/