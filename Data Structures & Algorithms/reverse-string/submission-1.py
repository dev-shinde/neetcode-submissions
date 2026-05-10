class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        #so here we have been asked to revers the string, there can be 2 possible ways

        #one is to directly return it from indentation

        # s = s[::-1]

        # return s

        n = len(s)
        l = 0
        r = n-1

#what is my stopping point here, the idea is to create a temporary variable, store one point there and place the variables accordingly

        while(l<r):
            
                #so here we will go through it again
                z = s[l]
                s[l] = s[r]
                s[r] = z
                l += 1
                r -= 1
            

        