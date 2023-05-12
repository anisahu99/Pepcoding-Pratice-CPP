#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=11;
    int nums[n]={10,5,9,1,11,8,6,15,3,12,2};
    unordered_map<int,bool>m;
    for(int num:nums)
    m[num]=true;
    for(int num:nums){
        if(m.find(num-1)!=m.end()){
            m[num]=false;
        }
    }
    int count;
    int max=0;
    int number;
    for(int num:nums){
        count=0;
        bool value=m[num];
        if(value==true){
            count=1;
            while(m.find(num+1)!=m.end()){
                count++;
                num=num+1;
            }
            if(count>max){
            max=count;
            number=num;
            }
        }
    }
    cout<<max<<endl;
    for(int i=0;i<max;i++)
    cout<<number-i<<endl;
return 0;
}