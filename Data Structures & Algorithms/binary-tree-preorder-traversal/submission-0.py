# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        preorder = []
        def recursion(node: Optional[TreeNode]):
            if not node:
                return
            preorder.append(node.val)
            recursion(node.left)
            recursion(node.right)
        recursion(root)
        return preorder
