class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        #so now lets say ; we have an added logic maybe we can have max profit so far
        #what are the extra variables that we will need
        #min so far, max from the list 

        #so it is just one loop

        minimum = prices[0]
        max_profit = 0

        for i in prices:
            #the logic is to first start with the min one
            #the current is i

            minimum = min(minimum,i)

            profit = i-minimum

            max_profit = max(max_profit,profit)

        return max_profit

