class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        left, right = 0, len(nums) - 1
        res = [0 for _ in range(len(nums))]

        for p in reversed(range(len(nums))):
            if abs(nums[left]) >= abs(nums[right]):
                res[p] = nums[left]**2
                left += 1
            else:
                res[p] = nums[right]**2
                right -= 1

        return res