#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[n];
    int amt;
    int dp[amt+1];
    for(int i=0;i<n;i++){//coins loop
        for(int j=arr[i];j<amt+1;j++){
            dp[j] +=dp[j-arr[i]];
        }
    }
    cout<<dp[amt];
return 0;
}