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
    bool ans=false;

    void solve(TreeNode* &node, int &target, int sum){
        if(node==NULL) return;
        int newsum=sum+node->val;
        if(newsum==target && node->left==NULL && node->right==NULL){
            ans=true;
            return;
        }
        solve(node->left, target, newsum);
        solve(node->right, target, newsum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        solve(root,targetSum,0);
        return ans;
    }
};