class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for t in tokens:
            if t in "+-*/":
                m = stack.pop()
                n = stack.pop()
                if t == "+":
                    stack.append(n+m)
                elif t == "-":
                    stack.append(n-m)
                elif t == "*":
                    stack.append(n*m)
                else:
                    stack.append(int(n/m))
            else:
                stack.append(int(t))
        
        return stack.pop()