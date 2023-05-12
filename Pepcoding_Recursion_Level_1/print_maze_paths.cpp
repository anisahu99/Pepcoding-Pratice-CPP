#include<bits/stdc++.h>
using namespace std;
void f(int sr,int sc,int dr,int dc,string ans){
    if(sr==dr&&sc==dc){
        cout<<ans<<endl;
        return;
    }
    if(sc<dc)
    f(sr,sc+1,dr,dc,ans+"h");
    if(sr<dr)
    f(sr+1,sc,dr,dc,ans+"v");
}
int main(){
    int dr=3;
    int dc=3;
    f(1,1,dr,dc,"");
}