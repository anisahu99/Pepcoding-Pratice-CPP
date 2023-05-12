#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int value=(n&(n-1));
    if(value==0)
    cout<<"true";
    else
    cout<<"false";
return 0;
}
