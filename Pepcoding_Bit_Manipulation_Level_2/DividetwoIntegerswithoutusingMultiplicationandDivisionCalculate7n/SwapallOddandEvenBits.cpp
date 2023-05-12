#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Num;
    cin>>Num;
    int OddMask=0x55555555;
    int EvenMask=0XAAAAAAAA;
    int OddPart=(Num&OddMask);
    int EvenPart=(Num&EvenMask);
    OddPart <<=1;//OddPart=(Oddpart<<1)
    EvenPart >>=1;//EvenPart=(EvenPart>>1)
    Num=(OddPart|EvenPart);
    cout<<Num;
return 0;
}