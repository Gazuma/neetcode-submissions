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
    bool balanced = true;

    int solve(TreeNode* root){
        if(root and balanced){
            int rtree = 1 + solve(root->right);
            int ltree = 1 + solve(root->left);
            if(abs(rtree-ltree)>1){
                balanced = false;
            }
            return max(rtree,ltree);
        }
        return 0;
    }

    bool isBalanced(TreeNode* root) {
        solve(root);
        return balanced;
    }
};
