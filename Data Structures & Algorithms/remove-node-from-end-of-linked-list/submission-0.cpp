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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int ct=0;
        while(temp!=NULL){
            temp=temp->next;
            ct++;
        }
        int k=ct-n;
        if(k==0){
            return head->next;
        }
        ListNode* cur=head;
        ListNode* prev=NULL;
        while(k>0){
            prev=cur;
            cur=cur->next;
            k--;

        }
        if(cur->next!=NULL){
            ListNode* f=cur->next;
            cur->next=NULL;
            prev->next=f;
        }else{
            prev->next=NULL;
        }
        return head;


    }
};
