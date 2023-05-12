#include<bits/stdc++.h>
int powerOfTwo(int x){
    //x=2^n+l
    int i=1;
    while(2*i<=x){
        i=i*2;
    }
    return i;
}
using namespace std;
int main()
{
    int x=7;
    int l=powerOfTwo(x);
    int la=x-l;
    cout<<2*la+1;
return 0;
}