# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        if not root:
            return False
        
        def rec(node, target):
            assert node, "node must not be None"
            target -= node.val
            if not node.left and not node.right:
                return target == 0
            left = rec(node.left, target) if node.left else False
            right = rec(node.right, target) if node.right else False
            return left or right
        return rec(root, targetSum)