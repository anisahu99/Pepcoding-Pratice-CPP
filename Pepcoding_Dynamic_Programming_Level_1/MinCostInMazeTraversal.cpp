#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=2,m=2;
    int arr[n][m]={{3,1},{4,3}};
    // for(int i=0;i<n;i++){
    //     cout<<endl;
    //     for(int j=0;j<m;j++){
    //          cout<<arr[i][j];
    //      }
    // }
        int dp[n][m];
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(i==n-1&&j==m-1)
                dp[i][j]=arr[i][j];
                else if(i==n-1)
                dp[i][j]=dp[i][j+1]+arr[i][j];
                else if(j==m-1)
                dp[i][j]=dp[i+1][j]+arr[i][j];
                else
                dp[i][j]=min(dp[i][j+1],dp[i+1][j])+arr[i][j];
            }
        }
        cout<<dp[0][0];
return 0;
}