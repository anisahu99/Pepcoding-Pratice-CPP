#include<bits/stdc++.h>
using namespace std;
class Node{
   int data;
   vector<Node> children;
};
void sol(Node root){

   cout<<root->data;
   for(Node Child:Node->children){
      sol(child);
   }
}
int main()
{
return 0;
}