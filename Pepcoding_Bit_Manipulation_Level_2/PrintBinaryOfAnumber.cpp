#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=20;
    bool flag=false;
    int j=0;
    int rev=0;//reverse of n
    for(int i=31;i>=0;i--){
        int mask=(1<<i);
        if(flag){
            if((n&mask)!=0){
            cout<<"1";
            int smak=(1<<j);
                rev |=smak;
            }
            else
            cout<<"0";
            j++;
        }
        else{
            if((n&mask)!=0){
                flag=true;
                cout<<"1";
                int smak=(1<<j);
                rev |=smak;
                j++;
            }
            else{

            }
        }
    }
    cout<<endl<<rev;
return 0;
}