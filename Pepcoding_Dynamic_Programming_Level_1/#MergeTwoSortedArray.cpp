#include<bits/stdc++.h>
using namespace std;
int main()//# means some test case false means code is not correct for all cases
{
    int n=2,m=8;
    int arr1[n]={1,35};
    int arr2[m]={6,9,13,15,20,25,29,46};
    int k=n-1,i=0,j=0;
    while(i!=(n-1)||j!=(m-1)){
        if(arr1[i]>arr2[j]){
            int temp=arr2[j];
            arr2[j]=arr1[k];
            arr1[k]=temp;
            sort(arr1,arr1+n);
            i++;
            j++;
            }
    }
    sort(arr2,arr2+m);
    for(int i=0;i<n;i++)
    cout<<arr1[i];
    cout<<endl;
    for(int i=0;i<m;i++)
    cout<<arr2[i];
return 0;
}
/*2 8
1 35
6 9 13 15 20 25 29 46*/
// 2 8
// 12 42
// 3 4 5 28 37 42 43 46