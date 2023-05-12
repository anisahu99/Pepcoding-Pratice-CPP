#include<bits/stdc++.h>
using namespace std;
int CountSetBit(long long N){
    int res=0;
    while(N>0){
        res++;
        N=N-(N&-N);
    }
    return res;
}
int ncr(int n,int r){//i=n,k=r
    if(n<r)
    return 0;
    int res=1;
    for(int j=0;j<r;j++){
        res=res*(n-j);
        res=res/((j+1));
    }
}
int solution(long long N,int k,int i){
    if(i==0)
    return 0;
    long long mask=1l<<i;
    int res=0;
    if((N&mask)==0)
    res=solution(N,k,i-1);
    else{
        int res1=solution(N,k-1,i-1);
        int res2=ncr(i,k);
    }
    return res;
}
int main()
{
    long long N;
    int k=CountSetBit(N);
return 0;
}