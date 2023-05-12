#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    long long building=1;
    long long space=1;
    for(int i=2;i<=n;i++){
        long long newbuilding=space;
        long long newspace=building+space;
        building=newbuilding;
        space=newspace;
    }
    long long total=space+building;
    total=total*total;
    cout<<total;
return 0;
}