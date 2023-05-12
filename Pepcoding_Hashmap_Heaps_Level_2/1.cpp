#include<bits/stdc++.h>
using namespace std;
int main(){
   string s="ADGDBF";
   for(int i=0;i<s.length();i++){
      s[i]=s[i];
      if(s[i]>='A'&&s[i]<='Z')
      cout<<s[i]<<endl;
   }
   cout<<"hi";
return 0;
}