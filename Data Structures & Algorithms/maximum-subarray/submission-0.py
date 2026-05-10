class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        current = 0
        max_sum = nums[0]    # start with first element, handles all-negative case

        for num in nums:
            if current < 0:
                current = 0  # throw away negative baggage, start fresh
            
            current += num
            max_sum = max(max_sum, current)

        return max_sum