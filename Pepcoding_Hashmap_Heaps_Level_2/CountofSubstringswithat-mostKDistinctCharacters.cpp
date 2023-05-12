#include<bits/stdc++.h>
using namespace std;
int countSol(string s,int k){
    int n=s.length();
    int count =0;
    int i=-1;
    int j=-1;
    unordered_map<char,int> m;
    while(true){
        while(i<n-1){
            i++;
            m[s[i]]++;
            if(m.size()<=k){
                count +=i-j;            
                }
                else{
                    break;
                }
        }
        if(i==n-1&&m.size()<=k){
            break;
        }
        while(j<i){
            j++;
            if(m[s[j]]==1){
                m.erase(s[j]);
            }
            else{
                m[s[j]]--;
            }
            if(m.size()==k){
                count +=i-j;
                break;
            }
        }
    }
}
int main()
{
return 0;
}