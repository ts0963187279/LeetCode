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
    TreeNode* recursive(TreeNode* t1, TreeNode* t2){
        if(t1==NULL)
            return t2;
        if(t2==NULL)
            return t1;
        t1->val = t1->val + t2->val;
        t1->left = recursive(t1->left,t2->left);
        t1->right = recursive(t1->right,t2->right);
        return t1;
    }
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        return recursive(t1,t2);
    }
};
