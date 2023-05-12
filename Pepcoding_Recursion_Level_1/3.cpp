#include<bits/stdc++.h>
using namespace std;
void print_Decreasing_Increasing(int n){
    if(n==0)
    return;
    else{
        cout<<n<<endl;
        print_Decreasing_Increasing(n-1);
        cout<<n<<endl;
    }
    }
int main(){
    int n=5;
    print_Decreasing_Increasing(n);
}