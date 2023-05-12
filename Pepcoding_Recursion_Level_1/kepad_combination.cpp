#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
vector<string> str={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
vector<string> letterCombinations(string digits){
    if(digits.length()==0){
    vector<string> bres;
    bres.push_back("");
    return bres;
    }
char pqr=digits[0];
string abc=digits.substr(1);
vector<string> xyz=letterCombinations(abc);
vector<string>myres;
string st=str[pqr-'0'];
for(int j=0;j<st.length();++j){
    for(string rs:xyz){
        myres.push_back(rs+st[j]);
    }
}
return myres;
}
int main(){
    vector<string> res;
    string num="23";
    res=letterCombinations(num);
    for(auto ans:res)
    cout<<ans<<endl;
}