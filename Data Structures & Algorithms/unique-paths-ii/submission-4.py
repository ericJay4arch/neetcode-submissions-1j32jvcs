class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid: List[List[int]]) -> int:
        m, n = len(obstacleGrid), len(obstacleGrid[0])
        paths = [[0]*(n+1)]*(m+1)
        for i in range(n+1):
            paths[0][i] = 0
        for i in range(m+1):
            paths[i][0] = 0
        paths[1][1] = 1 if obstacleGrid[0][0] == 0 else 0
        for i in range(1, m+1):
            for j in range(1, n+1):
                if i == 1 and j == 1:
                    continue
                paths[i][j] = paths[i-1][j]+paths[i][j-1] if obstacleGrid[i-1][j-1] == 0 else 0
        return paths[m][n]