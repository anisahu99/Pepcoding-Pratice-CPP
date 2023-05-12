#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=12;
    int array[n]={2,8,-3,-5,2,-4,6,1,2,1,-3,4};
    unordered_map<int,int> m;
    m[0]=-1;
    int max;
    int size=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=array[i];
        if(m.find(sum)==m.end()){
            m[sum]=i;
        }
        else if(m.find(sum)!=m.end()){
            size=i-m[sum];
            if(size>max){
                max=size;
            }
        }
    }
    cout<<max;
return 0;
}