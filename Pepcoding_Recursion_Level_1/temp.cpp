/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       if(list1==NULL&&list2==NULL)
        return NULL;
         if(list1->next==NULL&&list2->next==NULL){
                if(list2->val>list1->val){
                list2->next=NULL;
                list1->next=list2;
                return list1;
            }
        else{
            list1->next=NULL;
            list2->next=list1;
            return list2;
        }
        ListNode*MergeHead=mergeTwoLists(list1->next,list2->next);
            if(list2->val>list1->val){
                list2->next=MergeHead;
                list1->next=list2;
                return list1;
            }
        else{
            list1->next=MergeHead;
            list2->next=list1;
            return list2;
        }
    }
};