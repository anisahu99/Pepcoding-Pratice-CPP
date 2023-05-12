#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N=45;//This method fails in some cases 
    int rmsb=(N&-N);//this case for rmsb value not equal to 1
    int XOR=(N^rmsb);
    int x=(rmsb>>1);
    XOR=(x|XOR);
    cout<<XOR;
return 0;
}