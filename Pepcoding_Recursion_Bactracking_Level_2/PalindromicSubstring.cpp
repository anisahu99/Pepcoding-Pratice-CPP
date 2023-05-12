#include<bits/stdc++.h>
using namespace std;
 bool check_palindrome(string& str){
   int n=str.length();
   for(int i=0;i<n;i++){
      if(str[i]!=str[n-1-i]){
         return false;
      }
   }
   return true;
 }
void solution(string str,string asf){
   if(str.length()==0){
      cout<<asf<<endl;
      return;
   }
   for(int i=0;i<str.length();i++){
      string pre=str.substr(0,i+1);
      if(check_palindrome(pre)){
         string res=str.substr(i+1);
         solution(res,asf+"("+pre+")");
      }
   }
}
int main()
{
   string str="pep";
   solution(str,"");
return 0;
}