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
    
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) 
    {
        vector<vector<int>>v(m,vector<int>(n,-1));
        ListNode*cur=head;
        int top=0,down=m-1,left=0,right=n-1,dir=0;
        while(top<=down and left<=right)
        {
           if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    if(!cur) return v;
                    v[top][i]=cur->val;
                    cur=cur->next;
                   
                }
                top++;
            }
            else if(dir==1)
            {
                for(int i=top;i<=down;i++)
                {
                    if(!cur) return v;
                    v[i][right]=cur->val;
                  cur=cur->next;
                }
                  right--;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    if(!cur) return v;
                    v[down][i]=cur->val;
                    cur=cur->next;
                }
                down--;
            }
            else if(dir==3)
            {
                for(int i=down;i>=top;i--)
                {
                    if(!cur) return v;
                    v[i][left]=cur->val;
                    
                    cur=cur->next;
                }
                left++;
            }
            dir=(dir+1)%4;
        }
        return v;
    }
    
};




















//vector<vector<int>>v(m,vector<int>(n,-1));
    
//         ListNode*  cur=head;
    
//         int top=0,down=m-1,left=0,right=n-1,dir=0;
        
//         while(cur&&top<=down&&left<=right)
//         {
            // if(dir==0)
            // {
            //     for(int i=left;i<=right;i++)
            //     {
            //         if(!cur) return v;
            //         v[top][i]=cur->val;
            //         cur=cur->next;
            //         top++;
            //     }
            // }
            // else if(dir==1)
            // {
            //     for(int i=top;i<=down;i++)
            //     {
            //         if(!cur) return v;
            //         v[i][right]=cur->val;
            //         right--;cur=cur->next;
            //     }
            // }
            // else if(dir==2)
            // {
            //     for(int i=right;i>=left;i--)
            //     {
            //         if(!cur) return v;
            //         v[down][i]=cur->val;
            //         down--;cur=cur->next;
            //     }
            // }
            // else if(dir==3)
            // {
            //     for(int i=down;i>=top;i--)
            //     {
            //         if(!cur) return v;
            //         v[i][left]=cur->val;
            //         left++;cur=cur->next;
            //     }
            // }
//             dir=(dir+1)%4;
           
//         }
//         return v;