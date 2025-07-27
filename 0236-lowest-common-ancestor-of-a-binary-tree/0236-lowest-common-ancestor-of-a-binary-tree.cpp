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
    
    void preorder(TreeNode* node, TreeNode* k, vector<TreeNode*>& path) {
    if (node == nullptr) return;

    path.push_back(node); // add current node to path

    if (node == k) return; // found the target, stop adding more

    preorder(node->left, k, path);
    if (path.back() == k) return; // found in left subtree

    preorder(node->right, k, path);
    if (path.back() == k) return; // found in right subtree

    path.pop_back(); // backtrack if not found in either subtree
}



    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>p1;
        vector<TreeNode*>q1;
        preorder(root, p, p1);
        preorder(root, q, q1);

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