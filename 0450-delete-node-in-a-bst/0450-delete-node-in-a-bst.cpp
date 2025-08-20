class Solution {
public:
    TreeNode* findmax(TreeNode* node) {
        if(node == NULL) return NULL;
        while(node->right != NULL) {
            node = node->right;
        }
        return node;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;

        if(root->val == key) {
            // Case 1: No child
            if(root->left == NULL && root->right == NULL) {
                delete root;
                return NULL;
            }
            // Case 2: One child (right only)
            else if(root->left == NULL) {
                TreeNode* rightchild = root->right;
                delete root;
                return rightchild;
            }
            // Case 3: One child (left only)
            else if(root->right == NULL) {
                TreeNode* leftchild = root->left;
                delete root;
                return leftchild;
            }
            // Case 4: Two children
            else {
                TreeNode* maxi = findmax(root->left); // use predecessor
                root->val = maxi->val;
                root->left = deleteNode(root->left, maxi->val);
                return root;
            }
        }
        else if(key < root->val) {
            root->left = deleteNode(root->left, key);  // ✅ update left
        }
        else {
            root->right = deleteNode(root->right, key); // ✅ update right
        }
        return root;
    }
};
