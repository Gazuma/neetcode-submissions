# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def depth(self,root):
        if(root):
            return 1 + max(self.depth(root.left),self.depth(root.right))
        return 0
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        if(root):
            current = (abs(self.depth(root.right)-self.depth(root.left))<=1)
            return current and self.isBalanced(root.left) and self.isBalanced(root.right)
        return True