# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverse(self, prev, curr):
        if curr == None: 
            return prev
        temp = curr.next
        curr.next = prev
        return self.reverse(curr, temp)

    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        return self.reverse(None, head)

