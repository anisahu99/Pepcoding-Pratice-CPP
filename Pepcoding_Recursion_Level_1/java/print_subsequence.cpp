#include<bits/stdc++.h>
using namespace std;
void print(string ques,string ans){
    if(ques.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ress=ques[0];
    string str=ques.substr(1);
    print(str,ans+ress);
    print(str,ans+"_");
}
int main(){
    string ques="abc";
    print(ques,"");
}