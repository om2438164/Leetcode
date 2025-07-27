class Solution {
public:
    int ans = INT_MAX;

    void preorder(TreeNode* node, int count) {
        if (node == NULL) return;

       
        count++;
        if (node->left == NULL && node->right == NULL) {
            ans = min(ans, count);
            return;
        }
         
        preorder(node->left, count);
        preorder(node->right, count);
    }

    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        preorder(root, 0);
        return ans;
    }
};
