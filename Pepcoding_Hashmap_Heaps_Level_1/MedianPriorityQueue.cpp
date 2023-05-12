#include<bits/stdc++.h>
using namespace std;
priority_queue<int>left;
priority_queue<int,vector<int>,greater<int>>right;
// void add(int val){
//         if(!right.empty()&&val>right.top()){
//             right.push(val);
//         }
//         else{
//         left.push(val);
//         }
//         if(left.size()-right.size()==2){
//             right.push(left.top());
//             left.pop();
//         }
//         else if(right.size()-left.size()==2){
//             left.push(right.top());
//             right.pop();
//         }
//         return;
//     }
void remove(){
        if(left.size()>=right.size()){
            left.pop();
        }
        else{
            right.pop();
        }
    }
    
int main()
{
return 0;
}