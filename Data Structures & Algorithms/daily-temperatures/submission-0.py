class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        numDay = len(temperatures)
        out = [0 for _ in range(numDay)]
        
        for i in range(numDay):
            now = temperatures[i]
            for j in range(i+1, numDay):
                if temperatures[j] > now:
                    out[i] = j - i
                    break
        
        return out