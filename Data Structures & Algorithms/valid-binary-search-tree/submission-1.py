# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        prev = float('-inf')

        def rec(node):
            nonlocal prev
            if not node:
                return True
            
            if not rec(node.left):
                return False

            if prev >= node.val:
                return False
            else:
                prev = node.val
            
            if not rec(node.right):
                return False
            
            return True
        return rec(root)
            

            
            