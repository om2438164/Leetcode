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
    // 1. Using DFS 

    // int ans=0;
    // void preorder(TreeNode* node,int count){
    //     if(node==NULL){
    //         ans=max(ans,count);
    //         return;
    //     }
    //     count++;
    //     preorder(node->left,count);
    //     preorder(node->right,count);
    // }

    // 2. Using BFS
    void bfs(TreeNode* node,int& ans){
        queue<TreeNode*>q;
        q.push(node);
        q.push(NULL);

        while(!q.empty()){
            TreeNode* front=q.front();
            q.pop();
            if(front==NULL){
                ans++;
                if(!q.empty()) q.push(NULL);

            }else{
                if(front->left!=NULL) q.push(front->left);
                if(front->right!=NULL) q.push(front->right);
            }
        }
    }

    int maxDepth(TreeNode* root) {
        // int count=0;
        // preorder(root,count);
        // return ans;

        if(root==NULL) return 0;
        int ans=0;
        bfs(root,ans);
        return ans;
    }
};