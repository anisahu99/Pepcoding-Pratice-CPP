#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<string,string>>v;

    v.push_back({"Chennai","Banglore"});
    v.push_back({"Bombay","Delhi"});
    v.push_back({"Goa","Chennai"});
    v.push_back({"Delhi","Goa"});
    // for(int i=0;i<v.size();i++){
    //     string source=v[i].first;
    //     string destination=v[i].second;
    //     cout<<source<<" "<<destination<<endl;
    // }
    // for(pair<string,string> s:v){
    //     cout<<s.first<<" "<<s.second<<endl;
    // }
    unordered_map<string,bool>m;
    for(pair<string,string> s:v){
        if(m.find(s.first)==m.end()){
            m[s.first]=true;
        }
        m[s.second]=false;
        
    }
    // for(auto it:m){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
return 0;
}