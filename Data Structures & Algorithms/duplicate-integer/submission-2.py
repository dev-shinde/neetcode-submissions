class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        set = {}
        ans = False
        
        for num in nums:
            
            if num in set:
                ans = True
                
            set[num] = +1
            
        return ans
            