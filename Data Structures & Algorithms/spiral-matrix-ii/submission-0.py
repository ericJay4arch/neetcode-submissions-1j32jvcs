class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        res = [[0 for _ in range(n)] for _ in range(n)]
        num = 1
        for i in range(0, n // 2):
            for j in range(i, n-i-1):
                res[i][j] = num
                num += 1
            for j in range(i, n-i-1):
                res[j][n-i-1] = num
                num += 1
            for j in range(i, n-i-1):
                res[n-i-1][n-j-1] = num
                num += 1
            for j in range(i, n-i-1):
                res[n-j-1][i] = num
                num += 1
        
        if n % 2 != 0:
            res[n//2][n//2] = num
        return res

        
            