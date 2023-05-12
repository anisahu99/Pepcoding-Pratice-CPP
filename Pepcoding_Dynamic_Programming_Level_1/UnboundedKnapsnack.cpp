#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cap=7;
    int n=5;//no of items
    int values[n]={15,14,10,45,30};
    int weights[n]={2,5,1,3,4};
    int dp[cap+1];
    dp[0]=0;
    for(int bagc=1;bagc<cap;bagc++){
        int max=0;
        for(int i=0;i<n;i++){
            if(weights[i]<=bagc){
                int rbagc=bagc-weights[i];
                int rbagv=dp[rbagc];
                int tbagv=rbagv+values[i];
                if(tbagv>max)
                max=tbagv;
            }
        }
    }
        cout<<dp[7];
return 0;
}