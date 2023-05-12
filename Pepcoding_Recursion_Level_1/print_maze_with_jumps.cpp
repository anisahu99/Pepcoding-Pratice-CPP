#include<bits/stdc++.h>
using namespace std;
void f(int sr,int sc,int dr,int dc,string ans){//error in code
    if(sr==dr&&sc==dc){
        cout<<ans<<endl;
        return;
    }
    else{
    for(int i=1;i<(dr-sr);i++){
        if(sc<dc)
        f(sr,sc+i,dr,dc,ans+"h");
    }
    for(int j=1;j<(dc-sc);j++){
        if(sr<dr)
        f(sr+j,sc,dr,dc,ans+"v");
    }
    for(int k=1;k<((dr-sr)&&(dc-sc));k++){
        if(sr<dr&&sc<dc)
        f(sr+k,sc+k,dr,dc,ans+"d");
    }
}
}
int main(){
    int dr=3;
    int dc=3;
    f(1,1,dr,dc,"");
}