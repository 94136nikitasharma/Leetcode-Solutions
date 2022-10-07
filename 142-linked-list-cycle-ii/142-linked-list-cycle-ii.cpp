/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
         ListNode *fast=head;
         ListNode *slow=head;
         ListNode *temp=head;
        // base condition
        if(head==NULL or head->next==NULL)
        {
            return NULL;
        }
        while(fast!=NULL and fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
            {
                while(slow!=temp)
                {
                    slow=slow->next;
                    temp=temp->next;
                }
                return temp;
            }
           
        }
         return NULL;
    }
};