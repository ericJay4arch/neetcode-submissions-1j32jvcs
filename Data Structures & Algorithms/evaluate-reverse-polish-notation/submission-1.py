class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for t in tokens:
            res = 0
            if t == "+":
                res = int(stack[-1]) + int(stack[-2])
                stack.pop()
                stack.pop()
                stack.append(str(res))
            elif t == "-":
                res = int(stack[-2]) - int(stack[-1])
                stack.pop()
                stack.pop()
                stack.append(str(res))
            elif t == "*":
                res = int(stack[-2]) * int(stack[-1])
                stack.pop()
                stack.pop()
                stack.append(str(res))
            elif t == "/":
                res = int(int(stack[-2]) / int(stack[-1]))
                stack.pop()
                stack.pop()
                stack.append(str(res))
            else:
                stack.append(t)

        return int(stack[0])
