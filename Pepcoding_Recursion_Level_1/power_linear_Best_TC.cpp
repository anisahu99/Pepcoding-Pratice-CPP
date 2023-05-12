#include<bits/stdc++.h>
using namespace std;
long long power_linear(int x,int n){
    if(n==0)
    return 1;
        long long p=power_linear(x,n/2);
        long long r=p*p;
        if(n%2==1)
        r=r*x;
    
    return r;
    }
int main(){
    int x=8;
    int n=3;
   long long power= power_linear(x,n);
   cout<<power;
}