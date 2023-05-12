#include<bits/stdc++.h>
using namespace std;
int sol(string s,int k){
    int n=s.length();
    if(k==1){
        unordered_map<char,int> m;
        int ans=0;
        int i=-1;
        int j=-1;
        while(true){
            bool f1=false;
            bool f2=false;
            while(i<n-1){
                f1=true;
                i++;
                m[s[i]]++;
                if(m.size()==k+1){
                    if(m[s[i]]==1){
                        m.erase(s[i]);
                    }
                    else{
                        m[s[i]]--;
                    }
                    i--;
                    break;
                }
            }
            while(j<i){
                f2=true;
                if(m.size()==1){
                ans +=i-j;
                }
                j++;
                if(m[s[j]]==1){
                        m.erase(s[j]);
                    }
                    else{
                        m[s[j]]--;
                    }
                    if(m.size()<k){
                        break;
                    }
            }
            if(f1==false&&f2==false){
                break;
            }
        }
        return ans;
    }
    else if(k>=2){
    unordered_map<char,int> mpb;
    unordered_map<char,int> mps;
    int ans=0;
    int ib=-1;
    int is=-1;
    int j=-1;
    while(true){
        bool f1=false;
        bool f2=false;
        bool f3=false;

        while(ib<n-1){
            f1=true;
            ib++;
            mpb[s[ib]]++;
            if(mpb.size()==k+1){
                if(mpb[s[ib]]==1){
                    mpb.erase(s[ib]);
                }
                else{
                    mpb[s[ib]]--;
                }
                ib--;
                break;
            }
        }
        while(is<ib){
            f2=true;
            is++;
            mpb[s[is]]++;
            if(mps.size()==k){
                if(mps[s[is]]==1){
                    mps.erase(s[is]);
                }
                else{
                    mps[s[is]]--;
                }
                is--;
                break;
            }
        }
        while(j<is){
            f3=true;
            if(mpb.size()==k&&mps.size()==k-1){
                ans +=ib-is;
            }
            j++;
            if(mpb[s[j]]==1){
                    mpb.erase(s[j]);
                }
                else{
                    mpb[s[j]]--;
                }
            if(mps[s[j]]==1){
                    mps.erase(s[j]);
                }
                else{
                    mps[s[j]]--;
                }
                if(mpb.size()<k||mps.size()<k-1){
                    break;
                }
        }
        if(f1==false&&f2==false&&f3==false){
            break;
        }
    }
    return ans;
}
}
int main()
{
return 0;
}