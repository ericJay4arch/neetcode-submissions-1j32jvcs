class MinStack:

    def __init__(self):
        self.stack = []

    def push(self, val: int) -> None:
        self.stack.append(val)

    def pop(self) -> None:
        return self.stack.pop() if len(self.stack) > 0 else None
        
    def top(self) -> int:
        return self.stack[-1] if len(self.stack) > 0 else None

    def getMin(self) -> int:
        if len(self.stack) == 0:
            return None
        minAns = self.stack[0]
        for c in self.stack:
            minAns = min(c, minAns)
        return minAns

        
