#include<bits/stdc++.h>
using namespace std;
void print(int sr,int sc,int dr,int dc,string ans){
    if(sr==dr&&sc==dc){
        cout<<ans<<endl;
        return;
    }
    if(sr<dr){
        print(sr,sc+1,dr,dc,ans+"r");
    }
    if(sc<dc){
        print(sr+1,sc,dr,dc,ans+"d");
    }
    if(sr>0){
        print(sr,sc-1,dr,dc,ans+"l");
    }
    if(sc>0){
        print(sr-1,sc,dr,dc,ans+"t");
    }
}
int main(){
    int dr=3;
    int dc=3;
    print(1,1,dr,dc,"");
}