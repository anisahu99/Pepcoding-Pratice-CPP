#include<bits/stdc++.h>
using namespace std;
long long power_linear(int x,int n){
    if(n==0)
    return 1;
    else{
        return x*power_linear(x,n-1);
    }
    }
int main(){
    int x=8;
    int n=3;
   long long power= power_linear(x,n);
   cout<<power;
}