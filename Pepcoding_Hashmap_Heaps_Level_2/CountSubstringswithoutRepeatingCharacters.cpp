#include<bits/stdc++.h>
using namespace std;
int uniqueLetterString(string s) {
            int n=s.length();
            if(n==0){
                    return 1;
            }
            int ans=0;
            unordered_map<char,int> m;
            int i=-1;
            int j=-1;
            while(true){
                    bool f1=false;
                    bool f2=false;
                    while(i<n-1){
                            f1=true;
                            i++;
                            m[s[i]]++;
                            if(m[s[i]]==2){
                                    break;
                            }
                            else{
                                    ans+=(i-j);
                                    cout<<ans<<endl;
                            }
                    }
                    while(j<i){
                            f2=true;
                            j++;
                            m[s[j]]--;
                            if(m[s[j]]==1){
                                    ans+=(i-j);
                                    cout<<ans<<endl;
                                    break;
                            }
                    }
                    if(f1==false&&f2==false){
                            break;
                    }
            }
            return ans;
    }
int main()
{
    string s = "ABC";
    cout<<uniqueLetterString(s);
return 0;
}