#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int dp0[n+1];
    int dp1[n+1];
    dp0[0]=0;//dp0[0] means binary string with 0 length with no consecutive zeros
    dp1[0]=0;//dp1[0] means binary string with 0 length with no consecutive zeros
    dp0[1]=1;//dp0[1] means binary string with 1 length with no consecutive zeros
    dp1[1]=1;//dp1[1] means binary string with 1 length with no consecutive zeros
    for(int i=2;i<=n;i++){
        dp0[i]=dp1[i-1];
        dp1[i]=dp0[i-1]+dp1[i-1];
    }
    int total=dp0[n]+dp1[n];
    cout<<total;
return 0;
}