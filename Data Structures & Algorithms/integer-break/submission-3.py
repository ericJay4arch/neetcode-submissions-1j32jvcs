class Solution:
    def integerBreak(self, n: int) -> int:
        maxproduct = [0] * (n+1)
        maxproduct[2] = 1
        # maxproduct[3] = 2
        for num in range(3, n+1):
            i, j = 1, num - 1
            while i <= j:
                tmp = max(i*maxproduct[j], maxproduct[i]*j)
                tmp = max(maxproduct[i]*maxproduct[j], tmp)
                tmp = max(maxproduct[num], tmp)
                tmp = max(i*j, tmp)
                maxproduct[num] = tmp
                i, j = i+1, j-1
        return maxproduct[n]
