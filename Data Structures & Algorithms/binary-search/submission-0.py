class Solution:
    def search(self, nums: List[int], target: int) -> int:
        index = -1
        # left close, right open
        left, right = 0, len(nums)

        while left < right:
            mid = (left + right) // 2
            if nums[mid] == target:
                return mid # distinct
            elif nums[mid] < target:
                left = mid + 1
            else:
                right = mid

        return index