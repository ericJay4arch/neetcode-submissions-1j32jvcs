# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        iterA = headA
        seen = set()
        while iterA:
            seen.add(iterA)
            iterA = iterA.next
        
        iterB = headB
        while iterB:
            if iterB in seen:
                return iterB
            iterB = iterB.next
        
        return None