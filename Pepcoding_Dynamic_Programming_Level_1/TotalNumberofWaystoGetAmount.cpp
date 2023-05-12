#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int coins[n];
    int amount;
    int dp[amount+1];//[0,1,2,3,4,5,6,7,8,9,...amount]
    dp[0]=1;//total ways to pay 0 amount
    //dp[i] total ways to pay i amount using given coins
    for(int amoun=1;amoun<=amount;amoun++){
        {
            for(int coin:coins){
                if(coin<=amoun){
                    int RemainingAmount=amoun-coin;
                    dp[amoun]+=dp[RemainingAmount];
                }
            }
        }
    }
    cout<<dp[amount];
return 0;
}