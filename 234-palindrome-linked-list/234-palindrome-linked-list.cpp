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
    bool isPalindrome(ListNode* head) {
        ListNode*fast=head;
        ListNode*slow=head;
        while(fast->next!=NULL and fast->next->next!=NULL)
        {
           fast=fast->next->next;
            slow=slow->next;
            
        }
        slow->next=reverseList(slow->next);
        slow=slow->next;
        while(slow!=NULL)
        {
            if(head->val!=slow->val)
            {
                return false;
            }
            slow=slow->next;
            head=head->next;
        }
        return true;
    }
    ListNode*reverseList(ListNode*head)
    {
        ListNode*curr=head;
        ListNode*prev=NULL;
        ListNode*next;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};