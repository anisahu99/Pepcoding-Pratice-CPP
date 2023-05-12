#include<bits/stdc++.h>
using namespace std;
vector<string> GreyCode(int n){
    if(n==1){
        vector<string> bres;
        bres.push_back("0");
        bres.push_back("1");
        return bres;
    }
    vector<string> res=GreyCode(n-1);
    vector<string> myres;
    for(int i=0;i<res.size();i++){
        myres.push_back("0"+res[i]);
    }
    for(int i=res.size()-1;i>=0;i--){
        myres.push_back("1"+res[i]);
    }
    return myres;
}
int main()
{
    int n=3;//n means n bits grey code
    vector<string> str;
    str=GreyCode(n);
    for(string s:str)
    cout<<s<<endl;
return 0;
}