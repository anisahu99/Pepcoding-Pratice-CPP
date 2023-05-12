#include<bits/stdc++.h>
using namespace std;
void solution(string str){
    int Even=0;
    int Odd=0;
    for(int i=0;i<str.length();i++){
        int bit=str[i]-'0';
        if(i%2==1)
        Odd +=bit;
        else
        Even +=bit;
    }
    if((Even-Odd)%11==0)
    cout<<"true";
    else
    cout<<"false";
}
int main()
{
    string str="11010110101";
return 0;
}