#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<unordered_map<char,int>,vector<string>> ml;
            for(int i=0;i<strs.size();i++){
                    string s=strs[i];
                    unordered_map<char,int>m;
                    for(int j=0;j<s.length();j++){
                            m[s[j]]++;
                    }
                    if(ml.find(m)==ml.end()){
                            vector<string> ans;
                            ans.push_back(s);
                            ml[m]=ans;
                    }
                    else{
                            vector<string> ans=ml[m];
                            ans.push_back(s);
                            ml[m]=ans;
                    }
            }
            vector<vector<string>> sol;
            for(auto it:ml){
                    sol.push_back(it.second);
            }
            return sol;
    }
int main()
{
return 0;
}