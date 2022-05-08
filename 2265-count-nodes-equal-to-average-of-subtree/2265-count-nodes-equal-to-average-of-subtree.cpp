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
// class Solution {
// public:
//     int ans=0
//     int preorder(TreeNode*root,int &cnt)
//     {
//         if(root==NULL)
//         {
//             return 0;
//             cnt++;
//         }
//         // preorder(root->val,cnt);
//       int left =  preorder(node->left,cnt);
//       int  right =   preorder(node->right,cnt);
//         return (root->val+left+right);
        
//      }
//     void avg(TreeNode*root)
//     {
//         int cnt=0;
//         if(root==NULL)
//        {
//            return;
//        }
//         int avg= (preorder(root,cnt))/cnt;
//         if(root->val==avg) ans++;
//         avg(root->left);
//         avg(root->right);
//     }
//     int averageOfSubtree(TreeNode* root) {
//         ans=0;
//         avg(root);
//         return ans ;
//          }
// };
class Solution {
public:
    int ans = 0;
    int sum(TreeNode* root, int& cnt){
        if(root==NULL) return 0;
        cnt++;
        int left = sum(root->left,cnt);
        int right = sum(root->right,cnt);
        return (root->val + left + right);
    }
    void solve(TreeNode* root){
        if(root==NULL) return;
        int cnt = 0;
        int avg = (sum(root,cnt))/cnt;
        if(avg==root->val) ans++;
        solve(root->left);
        solve(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
        ans = 0;
        solve(root);
        return ans;
    }
 };