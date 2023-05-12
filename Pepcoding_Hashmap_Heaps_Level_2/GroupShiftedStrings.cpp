#include<bits/stdc++.h>
using namespace std;
string makekey(string str){
    string key="";
    for(int i=1;i<str.length();i++){
        char curr=str[i];
        char prev=str[i-1];
        int ascidiff=curr-prev;
        if(ascidiff<0){
            ascidiff+=26;
        }
        key+=ascidiff+"#";
    }
    key+=".";
    return key;
}
vector<vector<string>> sol(vector<string> s){
    unordered_map<string,vector<string>> m;
    int n=s.size();
    for(int i=0;i<n;i++){
        string key=makekey(s[i]);
        if(m.find(key)==m.end()){
            vector<string> list;
            list.push_back(s[i]);
            m[key]=list;
        }
        else{
            vector<string> newlist;
            newlist=m[key];
            newlist.push_back(s[i]);
            m[key]=newlist;

        }
    }
    vector<vector<string>> res;
    for(auto it:m){
        vector<string> ans=it.second;
        res.push_back(ans);
    }
    return res;
}
int main()
{
return 0;
}