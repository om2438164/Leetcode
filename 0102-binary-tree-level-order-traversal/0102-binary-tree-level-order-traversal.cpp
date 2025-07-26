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

    void bfs(TreeNode* node){
        if(node==NULL) return;
        vector<int>temp;
        queue<TreeNode*>q;
        q.push(node);
        q.push(NULL);
        
        while(!q.empty()){
            TreeNode* front=q.front();
            if(front==NULL){
                ans.push_back(temp);
                temp.clear();
                q.pop();
                if(!q.empty()) q.push(NULL);
            }else{
                temp.push_back(front->val);
                q.pop();
                if(front->left!=NULL) q.push(front->left);
                if(front->right!=NULL) q.push(front->right);
            }
            
        }
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        bfs(root);
        return ans;
    }
};