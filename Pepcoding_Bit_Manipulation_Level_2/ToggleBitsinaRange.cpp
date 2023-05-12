#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A=682;
    int B=13;
    int l=2;
    int r=3;
    for(int i=l;i<=r;i++){
        if(A&(1<<(i-1)))
        B=B|(1<<(i-1));
    }
    cout<<B;
return 0;
}