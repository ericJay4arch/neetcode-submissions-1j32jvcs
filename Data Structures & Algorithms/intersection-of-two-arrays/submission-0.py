class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        seen = set(nums1)
        res_set = set()
        for num in nums2:
            if num in seen:
                res_set.add(num)
        
        return list(res_set)