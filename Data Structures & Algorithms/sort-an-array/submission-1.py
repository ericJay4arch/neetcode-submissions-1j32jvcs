# import random
class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        def partition(left, right):
            tmp = nums[left+(right-left)//2]
            nums[left+(right-left)//2] = nums[left]
            # tmp = nums[left]
            while left < right:
                while left < right and nums[right] > tmp:
                    right -= 1
                nums[left] = nums[right]
                while left < right and nums[left] <= tmp:
                    left += 1
                nums[right] = nums[left]
                
            nums[left] = tmp
            return left

        def quiksort(left, right):
            # left close, right close
            if left > right:
                return

            mid = partition(left, right)
            quiksort(left, mid-1)
            quiksort(mid+1, right)

        quiksort(0, len(nums)-1)
        return nums
            
            