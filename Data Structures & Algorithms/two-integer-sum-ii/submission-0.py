class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        l = 0
        r = len(numbers)-1

        while(l<r):

            sum_ans = numbers[l]+numbers[r]


            if sum_ans == target:
                return [l+1,r+1]
            
            if sum_ans > target:
                r = r-1
            
            else:
                l = l+1

        return []

            
