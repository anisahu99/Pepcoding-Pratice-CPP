#include<bits/stdc++.h>
using namespace std;
void sol(string str,unordered_set<string>& st,string asf){
   if(str.length()==0){
      // string ans=asf.substr(0,asf.length()-1);
      // ans+=".";
      cout<<asf<<endl;;
      return;
   }
   for(int i=0;i<str.length();i++){
      string ps=str.substr(0,i+1);
      if(st.find(ps)!=st.end()){
         string ros=str.substr(i+1);
         sol(ros,st,asf+ps+" ");
      }
   }
}
int main()
{
   vector<string> words{"micro","soft","hi","ring","microsoft","hiring"};
   string str="microsofthiring";
   unordered_set<string> st;
   for(string s:words){
      st.insert(s);
   }
   sol(str,st,"");
return 0;
}