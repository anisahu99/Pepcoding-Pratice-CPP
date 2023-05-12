#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,string>v;
    v["Chennai"]="Banglore";
    v["Bombay"]="Delhi";
    v["Goa"]="Chennai";
    v["Delhi"]="Goa";
    unordered_map<string,bool>m;
    for(auto it:v){
        string source=it.first;
        string destination=it.second;
        if(m.find(source)==m.end()){
            m[source]=true;
        }
        m[destination]=false;
    }
    string head;
    for(auto it:m){
        if(it.second==true){
            head=it.first;
            cout<<it.first;
        }
    }
    while(v.find(head)!=v.end()){
        cout<<"-"<<v[head];
        head=v[head];
    }
return 0;
}