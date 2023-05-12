#include<bits/stdc++.h>
using namespace std;
long long solution(vector<int> arr){
    long long res=0;
    for(int i=0;i<32;i++){
        long long CountOn=0;
        for(int value:arr){
            if(value&(1<<i)==0){
                CountOn++;
            }
        }
         long long CountOff=arr.size()-CountOn;
         long long difference =CountOff*CountOn*2;
         res +=difference;
    }
    return res;
}
int main()
{
return 0;
}