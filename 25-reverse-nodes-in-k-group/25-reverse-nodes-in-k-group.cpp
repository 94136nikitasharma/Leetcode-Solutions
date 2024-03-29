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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count=0;
        ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode*next;
        ListNode* tmp=head;
        int i=0;
        while(tmp!=NULL && i<k)
        {
            tmp=tmp->next;
            i++;
        }
        if(i<k)
        {
           return head; 
        }
        while(curr!=NULL && count<k)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(next!=NULL)
        {
            head->next=reverseKGroup(next,k);
        }
        return prev;
    }
};