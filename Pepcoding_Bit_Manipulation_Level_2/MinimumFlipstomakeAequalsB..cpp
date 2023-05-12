#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A=57;
    int B=42;
    int num=(A^B);
    int MinCount=0;
    while(num!=0){
        int rmsb=(num&-num);
        num -=rmsb;
        MinCount++;
    }
    cout<<MinCount;
return 0;
}