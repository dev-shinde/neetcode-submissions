class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups = {}  # key: sorted string, value: list of anagrams

        for word in strs:
            key = "".join(sorted(word))  # "cat" → ["a","c","t"] → "act"
            
            if key not in groups:
                groups[key] = []         # first time seeing this key, create empty list
            
            groups[key].append(word)     # add word to its group

        return list(groups.values())     # return all the groups