#include<bits/stdc++.h>
using namespace std;
string minWindow(string s, string t) {
        int n=s.length();
        int m=t.length();
        string ans="";
        unordered_map<char,int> mt;
        unordered_map<char,int> ms;
        for(int i=0;i<m;i++){
                mt[t[i]]++;
        }
        int i=-1;
        int j=-1;
        int dmct=m;
        int mct=0;
        while(true){
                bool f1=false;
                    bool f2=false;
                
                while(i<n-1&&mct<dmct){
                        i++;
                        ms[s[i]]++;
                        if(mt.find(s[i])!=mt.end()){
                        if(ms[s[i]]<=mt[s[i]]){
                                mct++;
                             }
                     }
                        f1=true;
                }
                while(j<i&&mct==dmct){
                        string dans=s.substr(j+1,i+1);
                        if(ans.length()==0||dans.length()<ans.length()){
                                dans=ans;
                        }
                        j++;
                        if(ms[s[j]]==1){
                                ms.erase(s[j]);
                        }
                        else{
                                ms[s[j]]--;
                        }
                        if(ms[s[j]]<mt[s[j]]){
                                mct--;
                        }
                        f2=true;
                }
                if(f1==false&&f2==false){
                        break;
                }
        }
            return ans;
    }
int main()
{
return 0;
}