class MyQueue:

    def __init__(self):
        self.stack = []

    def push(self, x: int) -> None:
        self.stack.append(x)
        
    def pop(self) -> int:
        onother = []
        while self.stack:
            onother.append(self.stack.pop())
        res = onother.pop()
        while onother:
            self.stack.append(onother.pop())
        return res

    def peek(self) -> int:
        onother = []
        while self.stack:
            onother.append(self.stack.pop())
        res = onother[-1]
        while onother:
            self.stack.append(onother.pop())
        return res


    def empty(self) -> bool:
        return not self.stack
        


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()