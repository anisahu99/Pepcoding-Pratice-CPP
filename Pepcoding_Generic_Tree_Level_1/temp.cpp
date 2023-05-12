#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    vector<Node*> children;
    Node(int data){
        val=data;
    }
};
int main()
{
    Node* root;
    stack<Node*> st;
    st.push(root);
    // this is for preorder printing of tree.
    while(!st.empty()){
      Node* temp=st.top();
      st.pop();
      cout<<temp->val<<" ";
      for(int i=temp->children.size()-1;i>=0;i--){
        st.push(temp->children[i]);
      }  
    }
    st.push(root);
    //this is rinting of postorder of tree,but this have problem in code which cause infinite loop.
    while(!st.empty()){
        Node* temp=st.top();
        for(int i=temp->children.size()-1;i>=0;i--){
        st.push(temp->children[i]);
      }
      temp=st.top();
      st.pop();
      cout<<temp->val<<" ";

    }

return 0;
}