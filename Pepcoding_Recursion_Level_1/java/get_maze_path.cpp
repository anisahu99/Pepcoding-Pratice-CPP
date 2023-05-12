#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
vector<string> f(int r,int c,int n,int m){
    if(r==n&&c==m){
        vector<string> bres;
        bres.push_back("");
        return bres;
    }
    vector<string> h;
    vector<string>v;
    if(c<m)
    h=f(r,c+1,n,m);
    vector<string> myres;
    if(r<n)
    v=f(r+1,c,n,m);
    for(string str:h){
        myres.push_back("h"+str);
    }
    
    for(string st:v){
        myres.push_back("v"+st);
    }
    return myres;
}
int main(){
    int n=3,m=3;
    vector<string> res;
    res=f(1,1,n,m);
    for(auto it:res)
    cout<<it<<endl;
}