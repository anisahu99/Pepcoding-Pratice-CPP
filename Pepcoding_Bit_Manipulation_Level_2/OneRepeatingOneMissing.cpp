#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7]={1,2,3,5,6,7,2};
    int XOR=0;
    int XOR1=0;
    int XOR2=0;
    for(int i=0;i<7;i++)
    XOR=XOR^arr[i];
    for(int i=0;i<7;i++){
        XOR=XOR^(i+1);
    }
    int rmsbOfXOR=(XOR&-XOR);
    for(int i=0;i<7;i++){
        if(arr[i]&rmsbOfXOR)
        XOR1=XOR1^arr[i];
        else
        XOR2=XOR2^arr[i];
    }
    cout<<rmsbOfXOR<<endl;
    cout<<XOR<<endl;
    cout<<XOR1<<endl;
    cout<<XOR2;
    return 0;
}