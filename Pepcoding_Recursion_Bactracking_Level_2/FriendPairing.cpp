#include<bits/stdc++.h>
using namespace std;
void solution(int i,int n,vector<bool>& used,string asf){
   if(i>n){
      cout<<asf<<endl;
      return;
   }
   if(used[i]){
      solution(i+1,n,used,asf);
   }
   else{
   used[i]=true;
   solution(i+1,n,used,asf+"("+to_string(i)+")");
   for(int j=i+1;j<=n;j++){
      if(!used[j]){
         used[j]=true;
         solution(i+1,n,used,asf+"("+to_string(i)+to_string(j)+")");
         used[j]=false;
      }
   }
   used[i]=false;
   }
   return;
}
int main()
{
   int n;
   vector<bool> used(n+1,false);
   solution(1,3,used,"");
return 0;
}