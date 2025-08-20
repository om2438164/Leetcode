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
    vector<vector<int>>ans;

    void preorder(TreeNode* &node,int& target,int sum,vector<int> &temp){
        if(node==NULL) return;
        int newsum=sum+node->val;
        temp.push_back(node->val);
        if(newsum==target && node->left==NULL && node->right==NULL){
            ans.push_back(temp);
        }

        preorder(node->left,target,newsum,temp);
        preorder(node->right,target,newsum,temp);
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>temp;
        preorder(root,targetSum,0,temp);
        return ans;
    }
};