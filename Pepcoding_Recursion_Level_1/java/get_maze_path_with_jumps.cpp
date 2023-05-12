#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
vector<string> f(int sr,int sc,int dr,int dc){
    if(sr==dr&&sc==dc){
        vector<string> bres;
        bres.push_back("");
        return bres;
    }
    vector<string> paths;
    for(int ms=1;ms<=dr-sr;ms++){
        if(sc<dc){
        vector<string> hpaths=f(sr,sc+ms,dr,dc);
        
        for(string h:hpaths){
            paths.push_back("h"+ms+h);
        }
    }
    }
    for(int ms=1;ms<=dc-sc;ms++){
        if(sr<dr){
        vector<string> vpaths=f(sr+ms,sc,dr,dc);
        
        for(string v:vpaths){
            paths.push_back("v"+ms+v);
        }
        }
    }
    for(int ms=1;ms<=(dr-sr&&dc-sc);ms++){
        if(sr<dr&&sc<dc){
        vector<string> dpaths=f(sr+ms,sc+ms,dr,dc);
        for(string d:dpaths){
            paths.push_back("d"+ms+d);
        }
    }
    }
    return paths;
}
int main(){
    int n=3,m=3;
    vector<string> res;
    res=f(1,1,n,m);
    for(auto it:res)
    cout<<it<<endl;
}