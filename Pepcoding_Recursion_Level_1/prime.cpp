#include <bits/stdc++.h>  
using namespace std;  
int main()  
{  
  int n, flag=0;  
  cin >> n;    
  int m=n;
  for(int i = 2; i <= sqrt(n); i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"Number is not Prime."<<endl;  
          flag=1;    
      }  
  }  
  if (flag==0)  
      cout << "Number is Prime."<<endl;  
      while(flag==1){//for odd number
        n=n+2;
        flag=0;
        for(int i = 2; i <= sqrt(n); i++)  
        {
      if(n % i == 0)  
      {  
          cout<<"Number is not Prime."<<endl;  
          flag=1;    
      }  
        }
      }
  for(int i = 2; i <= sqrt(n); i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"Number is not Prime."<<endl;  
          flag=1;  
          break;  
      }  
  }  
  return 0;  
}  