class ArrayStack:
    def __init__(self, capacity):
        self.capacity = capacity
        self.array = [None] * self.capacity
        self.top = -1

    def isEmpty(self): 
        return self.top == -1

    def isFull(self): 
        return self.top == self.capacity - 1

    def push(self, item):
        if not self.isFull():
            self.top += 1
            self.array[self.top] = item
        else: 
            raise Exception("Stack is full")

    def pop(self):
        if not self.isEmpty():
            self.top -= 1
            return self.array[self.top + 1]
        else: 
            raise Exception("Stack is empty")

    def peek(self):
        if not self.isEmpty():
            return self.array[self.top]
        else: 
            return None

    def size(self): 
        return self.top + 1
      
      
instr = input("문자열 입력: ")
s = ArrayStack(100)
instr = instr.lower()
for ch in instr:
  if ord(ch) < ord('a') or ord(ch) > ord('z') :
    continue
  s.push(ch)

print(s)

for ch in instr:
  if ord(ch) < ord('a') or ord(ch) > ord('z'):
    continue
  if ch != s.pop():
    print("회문이 아님")
    exit()  
  print("회문이 맞음")