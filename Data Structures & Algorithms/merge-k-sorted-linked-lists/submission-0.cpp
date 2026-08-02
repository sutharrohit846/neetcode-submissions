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
ListNode* merger(ListNode* a,ListNode* b){
    ListNode* temp1=a;
    ListNode* temp2=b;
    ListNode* dummy=new ListNode(-1);
  
    ListNode* head=new ListNode(-1);
      dummy->next=head;
    while(temp1!=NULL&&temp2!=NULL){
        if(temp1->val <temp2->val){
            head->next=temp1;
            temp1=temp1->next;
            
        }else{
            head->next=temp2;
            temp2=temp2->next;
        }
        head=head->next;

    }
    while(temp1!=NULL){
         head->next=temp1;
         temp1=temp1->next;
         head=head->next;

    }
       while(temp2!=NULL){
         head->next=temp2;
         temp2=temp2->next;
         head=head->next;

    }
    return dummy->next->next;
}
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        if(n==0)return NULL;
        for(int i=1;i<n;i++){
            lists[i]=merger(lists[i],lists[i-1]);
        }
        return lists[n-1];
        
    }
};
