#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int data;
   vector<Node> children;
   Node(){
      int data;
      vector<Node> children;
   }
};
int main()
{
   int arr[]={10,20,50,-1,60,-1,-1,30,70,-1,80,110,-1,120,-1,-1,90,-1,-1,40,100,-1,-1,-1};
   stack<Node> st;
   Node root;
   int n=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<n;i++){
      if(arr[i]==-1){
         st.pop();
      }
      else{
      if(st.empty()){
         root.data=arr[i];
         st.push(root);
      }
      else{
         Node temp=new Node();
         temp.data=arr[i];
         st.top().children.push_back(temp);
         st.push(temp);
        }
      }
   }
return 0;
}