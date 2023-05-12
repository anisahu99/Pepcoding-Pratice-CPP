#include<bits/stdc++.h>
using namespace std;
void towerofhonoi(int n,int x1,int x2,int x3){
     if(n ==0)
     return;
    towerofhonoi(n-1,x1,x3,x2);
    cout<<n<<" Disk  ["<<x1<<"->"<<x2<<"]"<<endl;;
    towerofhonoi(n-1,x3,x2,x1);
    return;
    }
int main(){
    int n=3;
    int x1=10;
    int x2=11;
    int x3=12;
   towerofhonoi(n,x1,x2,x3);
}