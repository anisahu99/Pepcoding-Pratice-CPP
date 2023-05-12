#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b;
    int left;
    int right;
    int mask=(1<<(right-left+1));
    mask=mask-1;
    mask=(mask<<(left-1));
    mask=mask&a;
    b=mask|b;
    cout<<b;
return 0;
}