class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        lenSubStr = len(s1)
        count1 = {}
        for c in s1:
            count1[c] = 1 + count1.get(c, 0)
        
        for i in range(0, len(s2)-lenSubStr+1):
            count2 = {}
            for c in s2[i: i+lenSubStr]:
                count2[c] = 1 + count2.get(c, 0)
            if count2 == count1:
                return True
        else:
            return False
