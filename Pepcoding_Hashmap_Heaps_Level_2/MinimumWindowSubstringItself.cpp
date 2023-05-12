#include<bits/stdc++.h>
using namespace std;
string sol(string s){
    int n=s.length();
    unordered_set<char> st;
    for(int i=0;i<n;i++){
        st.insert(s[i]);
    }
    int dmct=st.size();
    unordered_map<char,int> m;
    int mct=m.size();
    int i,j=-1;
    int len=n;
    while(true){
        bool f1,f2=false;
        while(i<n-1&&mct<dmct){
            i++;
            m[s[i]]++;
            f1=true;
        }
        while(j<i&&mct==dmct){
            int plen=i-j;
            if(plen<len){
                len=plen;
            }
            j++;
            if(m[s[j]]==1){
            m.erase(s[j]);
            }
            else{
            m[s[j]]--;
            }
            f2=true;
        }
        if(f1==false&&f2==false){
            break;
        }
    }
}
int main()
{
return 0;
}