#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="111";
    int num=0;
    int power2=1;
    int power=1;
    int i=0;
    int n=a.length();
    for(char ch:a){
        if(ch=='1'){
            for(int j=0;j<n-1-i;j++){
                power2=power2*2;
            }
            num=num+power2;
            power2=1;
        }
        i++;
    }
    cout<<num;
return 0;
}