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
    vector<vector<int>> levelOrder(TreeNode* root) {
     if(root==NULL)
        return{};
        int count=1;
        queue<TreeNode*> q;
        vector<int>row;
        vector<vector<int>> result;
        q.push(root);
        while(!q.empty()) {
            if(q.front()->left)
                q.push(q.front()->left);
            if(q.front()->right)
                q.push(q.front()->right);
            row.push_back(q.front()->val);
            q.pop();
            if(--count == 0) {
                result.emplace_back(row);
                row.clear();
                count= q.size();
            }
            
        }
        return result;
    }
};
