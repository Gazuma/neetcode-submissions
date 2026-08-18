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
    int height = 0;

    int solve(TreeNode* root){
        if(root){
            int ltree = solve(root->left);
            int rtree = solve(root->right);
            height = max(height,ltree+rtree);
            return 1 + max(ltree,rtree);
        }
        return 0;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        solve(root);
        return height;
    }
};
