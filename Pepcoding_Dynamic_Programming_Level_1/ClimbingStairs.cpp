#include<bits/stdc++.h>
using namespace std;
int solution(int n,int qb[]){//memoization
    if(n==0)
    return 1;
    else if(n<0)
    return 0;
    if(qb[n]>0)
    return qb[n];
    int Path1=solution(n-1,qb);
    int Path2=solution(n-2,qb);
    int Path3=solution(n-3,qb);
    int Paths=Path1+Path2+Path3;
    qb[n]=Paths;
    return Paths;
}
int main()
{
    int n=5;
    int qb[n+1];
    memset(qb,0,sizeof(qb));
    int TotalPaths=solution(n,qb);
    // qb[0]=1;
    // //Make storage and make them their cells with meaning like in this case
    // //Tabulation Method//qb[n] store the all possible paths from n to 0; 
    // //Identify the direction of problem//in this case which side small and which side big problem
    // //Travel and solve
    // for(int i=1;i<=n;i++){
    //     if(i==1)
    //     qb[i]=qb[i-1];
    //     else if(i==2)
    //     qb[i]=qb[i-1]+qb[i-2];
    //     else
    //     qb[i]=qb[i-1]+qb[i-2]+qb[i-3];
    // }
    // cout<<qb[5];
    cout<<TotalPaths;
return 0;
}