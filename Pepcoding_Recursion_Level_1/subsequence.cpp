#include<bits/stdc++.h>
#include<string>
using namespace std;
vector<string> gg(string str){
    if(str.length()==0){
    vector<string> bres;
    bres.push_back("");
    return bres;
    }
    char ch=str[0];
    string xyz=str.substr(1);
    vector<string> pqr=gg(xyz);
    vector<string> myres;
    for(int i=0;i<pqr.size();++i){
        myres.push_back(""+pqr[i]);
    }
    for(int i=0;i<pqr.size();++i){
        myres.push_back(ch+pqr[i]);
    }
    return myres;
}

int main(){
    string str="ahbgdc";
    vector<string> res;
    res=gg(str);
    for(int i=0;i<res.size();++i)
    cout<<res[i]<<endl;
}