#include<bits/stdc++.h>
using namespace std;
int sol(string s,int k){
    int n=s.length();
    int MaxLen=0;
    int i=-1;
    int j=-1;
    unordered_map<char,int> m;
    while(true){
        bool f1=false;
        bool f2=false;
        while(i<n-1){
            f1=true;
            i++;
            m[s[i]]++;
            if(m.size()<k){
                continue;
            }
            if(m.size()==k){
                int len=i-j;
                if(len>MaxLen){
                MaxLen=len;
                }
            }
            else if(m.size()>k){
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
            if(m.size()>k){
                continue;;
            }
            if(m.size()==k){
                int len=i-j;
                if(len>MaxLen)
                MaxLen=len;
                break;
            }
        }
        if(f1==false&&f2==false){
            break;
        }
    }
    return MaxLen;
}
int main()
{
return 0;
}