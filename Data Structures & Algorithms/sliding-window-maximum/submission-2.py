class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        queue, res = collections.deque(), []
        for i, n in enumerate(nums):
            while queue and n >= queue[-1][1]:
                queue.pop()
            queue.append((i, n))
            if queue[-1][0] - queue[0][0] == k:
                queue.popleft()
            if i >= k-1:
                res.append(queue[0][1])

        return res

                

        