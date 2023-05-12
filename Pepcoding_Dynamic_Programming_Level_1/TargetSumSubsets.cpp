#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[n];
    int target;
    bool dp[n+1][target+1];
    for(int i=0;i<=target+1;i++){
        for(int j=0;j<=n+1;j++){
            if(i==0&&j==0){
                dp[i][j]=true;
            }
            else if(i==0)//(i==0&&j!=0) both corrct
            dp[i][j]=false;
            else if(j==0)//(j==0&&i!=0)
            dp[i][j]=true;
            else{
                if(dp[i-1][j]==true)
                dp[i][j]=true;
                else{
                    int val=arr[i-1];
                    if(j>=val){
                       if(dp[i][j-val]==true){
                        dp[i][j]=true;
                        }
                    }
                }
            }
        }
    }

return 0;
}