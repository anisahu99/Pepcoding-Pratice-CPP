#include<bits/stdc++.h>
using namespace std;
/**
 * For each character in the string, we take it out, and find all the permutations of the remaining
 * characters using a recursive call
 * 
 * @param s The string that we want to print all the permutations of.
 * @param ans The string that is being passed to the function.
 */
void print(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
   /* Printing all the permutations of a string. */
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        print(ros,ans+ch);
    }
}
int main(){
    string word="abc";
    print(word,"");
}