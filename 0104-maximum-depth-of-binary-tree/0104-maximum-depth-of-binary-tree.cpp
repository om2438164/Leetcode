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
    int ans=0;
    void preorder(TreeNode* node,int count){
        if(node==NULL){
            ans=max(ans,count);
            return;
        }
        count++;
        preorder(node->left,count);
        preorder(node->right,count);
    }
    int maxDepth(TreeNode* root) {
        int count=0;
        preorder(root,count);
        return ans;
    }
};