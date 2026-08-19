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

    bool same = true;

    void solve(TreeNode* p, TreeNode* q){
        if(p and q and same){
            bool ltree = isSameTree(p->left,q->left);
            bool rtree = isSameTree(p->right,q->right);
            same = (p->val == q->val) and rtree and ltree;
        }
        else if (p or q){
            same = false;
        }
        return;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        solve(p,q);
        return same;
    }
};
