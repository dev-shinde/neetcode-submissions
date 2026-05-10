class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        set = {}

        for i in range(len(nums)):

            complement = target - nums[i]

            if complement in set:
                return [set[complement],i]

            set[nums[i]] = i
        
        return []