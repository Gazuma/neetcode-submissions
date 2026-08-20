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
    
    bool isAnswer = false;

    bool isSameTree(TreeNode* r1, TreeNode* r2){
        if(r1 and r2){
            if(r1->val==r2->val and isSameTree(r1->left,r2->left) and isSameTree(r1->right, r2->right)){
                return true;
            }
        }
        else if (!r1 and !r2){
            return true;
        }
        return false;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root and subRoot){
            return (isSameTree(root,subRoot) or isSubtree(root->left,subRoot) or isSubtree(root->right,subRoot));
        }
        return false;
    }
};
