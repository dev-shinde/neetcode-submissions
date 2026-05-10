class Solution:
    def isPalindrome(self, s: str) -> bool:
        #we can use whatever appraoch we like ; like load aim and shoot our approach should be to use the load and aim at it and shoot
        #jokes appart ; lets work on fucking this guys off

        #so we have a string and we need to check from both sides how to do it 
        #resonable way is to use 2 pointers

        #the only thing is when checking we need to ignore space and other expression

        l = 0
        r = len(s)-1

        ans = True

        #now here starts 2 pointer

        #i am forgetting for what specific function to use here 

        while(l<r):
                while(l<r) and not s[l].isalnum():
                    l=l+1
                while(l<r) and not s[r].isalnum():
                    r=r-1

                if s[l].lower()!=s[r].lower():
                    ans = False
                

                l = l+1
                r = r-1

        return ans

        
            