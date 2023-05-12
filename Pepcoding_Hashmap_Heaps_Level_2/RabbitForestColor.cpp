#include<bits/stdc++.h>
using namespace std;
int sol(vector<int> v){
   unordered_map<int,int> m;
   for(int val:v)
   m[val]++;
   int totalMin=0;
   for(auto it:m){
      int x=it.first+1;
      int y=it.second;
      float g=(ceil(y*1.0/x*1.0))*(x*1.0);
      totalMin+=g;
   }
}
int main()
{
return 0;
}