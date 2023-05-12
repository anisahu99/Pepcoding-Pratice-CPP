#include<bits/stdc++.h>
using namespace std;
int main()
{
    int capaciti=7;
    int n=5;//no of items
    int values[n]={15,14,10,45,30};
    int weights[n]={2,5,1,3,4};
    int dp[n+1][capaciti+1];
    dp[0][0]=0;
    for(int x=0;x<n+1;x++){
        for(int y=0;y<=capaciti;y++)
        dp[x][y]=0;
    }
    for(int i=1;i<n+1;i++){
        int value=values[i-1];
        int weight=weights[i-1];
        for(int capacity=1;capacity<=capaciti;capacity++){
            /*if(capacity==0){
                dp[i][capacity]=0;
            }*/
            /*else if(i==0){
                dp[i][capacity]=0;
            }*/
            if(capacity<weight){
                dp[i][capacity]=dp[i-1][capacity];
            }
            else if(capacity>=weight){
                dp[i][capacity]=max(dp[i-1][capacity],(value+dp[i-1][capacity-weight]));
            }
        }
    }
    cout<<dp[5][7];
return 0;
}