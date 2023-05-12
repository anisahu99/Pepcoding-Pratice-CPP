#include<bits/stdc++.h>
using namespace std;
int sol(string s){
    unordered_set<char> st;
    int n=s.length();
    for(int i=0;i<n;i++){
        st.insert(s[i]);
    }
    int k=st.size();
    unordered_map<char,int> m;
    int i=-1;
    int j=-1;
    int ans=0;
    while(true){
        bool f1=false;
        bool f2=false;
        while(i<n-1){
            f1=true;
            i++;
            m[s[i]]++;
            if(m.size()==st.size()){
                ans+=n-i;
                break;
            }
        }
        while(j<i){
            f2=true;
            j++;
            if(m[s[j]]==1){
                    m.erase(s[j]);
                }
                else{
                    m[s[j]]--;
                }
                if(m.size()==st.size()){
                    ans+=n-1-i;
                }
                if(m.size()<st.size()){
                    break;
                }
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