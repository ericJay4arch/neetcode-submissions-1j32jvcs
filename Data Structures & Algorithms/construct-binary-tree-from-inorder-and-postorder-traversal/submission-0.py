# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def buildTree(self, inorder: List[int], postorder: List[int]) -> Optional[TreeNode]:
        if len(inorder) == 0:
            return None
        root_val = postorder[-1]
        root = TreeNode(root_val)
        left_len = inorder.index(root_val)
        right_len = len(postorder) - left_len
        root.left = self.buildTree(inorder[:left_len], postorder[:left_len])
        root.right = self.buildTree(inorder[left_len+1:], postorder[left_len:-1])
        return root