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
    bool test(TreeNode*p,TreeNode*q)
    {
        if(p==NULL and q==NULL)
        {
            return true;
        }
        else if(p==NULL or q==NULL)
        {
            return false;
        }
        else if(p->val!=q->val)
        {
            return false;
        }
        return test(p->right,q->left) and test(p->left,q->right);
    }
    bool isSymmetric(TreeNode* root) {
       if(root==NULL)
       {
           return true;
       }
        return test(root->left,root->right);
    }
};