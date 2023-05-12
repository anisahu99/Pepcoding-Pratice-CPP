#include<bits/stdc++.h>
using namespace std;
void f(int n,string ans){
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    if(n<0)
    return;
    f(n-1,ans+"1");
    f(n-2,ans+"2");
    f(n-3,ans+"3");
    return;
}
int main(){
    int n=3;
    f(n,"");
}