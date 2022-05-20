/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   
     int postidx=0;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
         postidx=postorder.size()-1;
         return createTree(inorder,postorder,0,inorder.size() - 1);
    }
     TreeNode* createTree(vector<int>& inorder, vector<int>& postorder,int start,int end)
    {
        if(start>end)
        {
            return NULL;
        }
        TreeNode*node=new TreeNode(postorder[postidx--]);
            int mid=0;
            for(int i=start;i<=end;i++)
            {
                if(inorder[i]==node->val)
                {
                    mid=i;
                    break;
                }
            }
          node->right =createTree(inorder, postorder, mid+1,end);
         node->left =createTree(inorder, postorder,start,mid-1);
        
         return node;
    }
};