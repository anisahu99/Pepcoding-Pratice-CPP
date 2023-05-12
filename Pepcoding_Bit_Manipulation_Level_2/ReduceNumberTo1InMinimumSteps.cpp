#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n=15;
    int res=0;
    while(n!=0){
        if(n%2==0)
        n=n/2;

        else if(n==3)
        n=n-1;

        else if((n&3)==1)
        n=n-1;

        else if((n&3)==3)
        n=n+1;

        res++;
    }
    cout<<res;
return 0;
}