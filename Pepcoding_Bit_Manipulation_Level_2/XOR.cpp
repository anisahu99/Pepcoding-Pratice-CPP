#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[8]={36,42,56,36,50,24,50,24};
    int XOR=0;
    int XOR1=0;
    int XOR2=0;
    for(int i=0;i<8;i++)
    XOR=XOR^arr[i];
    int rmsbOfXOR=(XOR&-XOR);
    for(int i=0;i<8;i++){
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