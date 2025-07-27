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
    bool ans=true;
    int height(TreeNode* node){
        if(node==NULL) return 0;

        int leftheight=height(node->left);
        int rightheight=height(node->right);
        int height=max(leftheight,rightheight)+1;
        return height;
    }
    void preorder(TreeNode* node,bool& ans){
        if(node==NULL) return;

        int leftheight=height(node->left);
        int rightheight=height(node->right);
        if(abs(leftheight-rightheight)>1){
            ans=false;
            return;
        } 
        preorder(node->left,ans);
        preorder(node->right,ans);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        bool ans=true;
        preorder(root,ans);
        return ans;
    }
};