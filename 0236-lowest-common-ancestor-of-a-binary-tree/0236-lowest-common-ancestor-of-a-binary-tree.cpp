/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    bool preorder(TreeNode* node, vector<TreeNode*>& temp, TreeNode* k) {
    if (node == NULL) return false;

    temp.push_back(node);  // Add current node to path

    if (node == k) return true;  // \U0001f3af Found target, stop here

    // Check left and right, and short-circuit if found
    if (preorder(node->left, temp, k) || preorder(node->right, temp, k))
        return true;

    temp.pop_back();  // ❌ Not found in this path, backtrack
    return false;
}


    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>p1;
        vector<TreeNode*>q1;
        preorder(root, p1, p);
        preorder(root, q1, q);

        int i=0,j=0;
        TreeNode* ans=NULL;
        while(i<p1.size() && j<q1.size()){
            if(p1[i]==q1[j]){
                ans=p1[i];
                i++,j++;
            } 
            else break;
        }
        return ans;
    }
};