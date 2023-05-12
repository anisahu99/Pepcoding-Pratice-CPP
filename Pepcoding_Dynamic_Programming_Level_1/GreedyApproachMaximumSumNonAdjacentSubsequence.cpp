#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[n];
    int include=arr[0];
    int exclude=0;
    for(int i=1;i<n;i++){
        int new_include=exclude+arr[i];
        int new_exlude=max(exclude,include);
        include=new_include;
        exclude=new_exlude;
    }
    cout<<max(exclude,include);
return 0;
}