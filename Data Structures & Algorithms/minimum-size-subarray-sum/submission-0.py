class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        min_len = 100005
        left, sub_sum = 0, 0
        for right in range(len(nums)):
            sub_sum += nums[right]
            while sub_sum >= target:
                min_len = min(min_len, right - left + 1)
                sub_sum -= nums[left]
                left += 1
        return min_len if min_len != 100005 else 0
            