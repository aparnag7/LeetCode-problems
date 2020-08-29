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
    bool isValidBST(TreeNode* root) {
        return isbst(root,NULL,NULL);
    }
    bool isbst(TreeNode* root , TreeNode* l ,TreeNode* r) {
        if(root == NULL)
            return true;
        if(l!=NULL && root->val<=l->val)
            return false;
        if(r!=NULL && root->val >= r->val)
            return false;
        return isbst(root->left,l,root) && isbst(root->right,root,r);
    }
};
