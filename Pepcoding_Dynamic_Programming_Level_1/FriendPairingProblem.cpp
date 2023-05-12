#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int dp[n+1];
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1]+(i-1)*dp[i-2];
    }
    cout<<dp[n];
return 0;
}
/*https://www.youtube.com/watch?v=SHDu0Ufjyk8&list=PL-Jc9J83PIiG8fE6rj9F5a6uyQ5WPdqKy&index=28&t=172s*/