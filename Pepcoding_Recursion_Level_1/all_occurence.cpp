#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
void all_occurence(vector<int> v,int idx,int x){
    if(idx==v.size())
    return;
    if(v[idx]==x)
    ans.push_back(idx);
    all_occurence(v,idx+1,x);
    return;
}
int main(){
    vector<int> v={2,3,6,9,8,3,2,3,6,4};
    int x=3;
    all_occurence(v,0,x);
    for(int y:ans)
    cout<<y;
}