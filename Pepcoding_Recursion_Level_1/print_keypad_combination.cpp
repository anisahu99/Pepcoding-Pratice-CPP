#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
vector<string> codes={".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
void print_keypad(string num,string ans){
    if(num.length()==0){
        cout<<ans<<endl;
        return;
    }
    char bres=num[0];
    string st=num.substr(1);
    string ress=codes[bres-'0'];
    for(int j=0;j<ress.length();++j){
        char cho=ress[j];
        print_keypad(st,ans+cho);
    }
}
int main(){
    string num="678";
    print_keypad(num,"");
}