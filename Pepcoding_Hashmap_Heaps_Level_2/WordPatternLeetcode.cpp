#include<bits/stdc++.h>
using namespace std;
vector<string> GivSepaString(string s){
    vector<string> ans;
    int i=0;
    string str="";
    while(i<s.length()){
        if(s[i]==' '){
            ans.push_back(str);
            str="";
            i++;
        }
        str.push_back(s[i]);
        i++;
    }
    ans.push_back(str);
    return ans;
}
bool patterns(string s1,string s){
    vector<string> ans=GivSepaString(s);
    unordered_map<char,string> m;
    unordered_map<string,bool> check_already;
    for(string s:ans){
        cout<<s<<endl;
    }
    for(int i=0;i<s1.length();i++){
        string word=ans[i];
        char pattern=s1[i];
        if(check[word]!=pattern){
                return false;
            }
        if(m.find(pattern)!=m.end()){
            if(m[pattern]!=word){
                return false;
            }
        }
        if(m.find(pattern)==m.end()){
            m[pattern]=word;
            check_already[word]=pattern;
        }
    }
    return true;
}
int main()
{
    string pattern="abba";
    string s="dog cat cat dog";
    vector<string> ans;
    patterns(patten,s);
return 0;
}