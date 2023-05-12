#include<bits/stdc++.h>
using namespace std;
int main(){
    int flag=0;
    int n;//no of keys
    cin>>n;
    int m=-1;
    for(int i = 2; i <= sqrt(n); i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"Number is not Prime."<<endl;  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout << "Number is Prime."<<endl;
    if(n%2==0){

    }
}