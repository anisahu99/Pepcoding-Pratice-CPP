#include<bits/stdc++.h>
using namespace std;
vector<string> str={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
vector<string> keypad(string num){
    if(num.length()==0){
    vector<string> bres;
    bres.push_back("");
    return bres;
    }
char pqr=num[0];
string abc=num.substr(1);
vector<string> xyz=keypad(abc);
vector<string>myres;
string st=str[pqr-'0'];
for(int j=0;j<st.length();++j){
    for(string rs:xyz){
        myres.push_back(rs+st[j]);
    }
}
return myres;
}
int main()
{
   vector<string> res;
    string num="23";
    res=keypad(num);
    for(auto ans:res)
    cout<<ans<<endl;
return 0;
}