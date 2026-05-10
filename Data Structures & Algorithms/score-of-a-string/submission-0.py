class Solution:
    def scoreOfString(self, s: str) -> int:
        #I dont know how to trigger ascii values here
        #but the logic will be to use, ascii values, maybe you can start from the end index run a loop and add index last - index [last -1] ; till the last-1>0 ; but how will we prototype here in python is a bit of doubt 
        total = 0
        
        for i in range(1, len(s)):
            total += abs(ord(s[i]) - ord(s[i-1]))
        
        return total