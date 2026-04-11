class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        f = {}
        for n in nums:
            f[n] = 1 + f.get(n, 0)
        
        pq = []
        for num in f.keys():
            heapq.heappush(pq, (f[num], num))
            if len(pq) > k:
                heapq.heappop(pq)
        
        res = []
        for p in pq:
            res.append(p[1])
        return res