class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        res = [0 for _ in range(len(temperatures))]
        stack = []

        for i, t in enumerate(temperatures):
            # if (len(stack) == 0) stack.append((i, t))
            while len(stack) > 0 and t > stack[-1][1]:
                index = stack[-1][0]
                res[index] = i - index
                stack.pop()
            stack.append((i, t))
        
        return res