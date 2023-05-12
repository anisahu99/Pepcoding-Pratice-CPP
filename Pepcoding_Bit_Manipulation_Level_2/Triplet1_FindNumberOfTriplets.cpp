#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,3,2,5,7,2,7,5,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<n;i++){
        int XOR=arr[i];
        for(int k=i+1;k<n;k++){
            XOR=XOR^arr[k];
            if(XOR==0)
            count +=(k-i);
        }
    }
    cout<<count;
return 0;
}