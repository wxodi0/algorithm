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

def precedence(op):
    if op in ('+', '-'):
        return 1
    if op in ('*', '/'):
        return 2
    return 0

def infix_to_postfix(expression):
    stack = ArrayStack(len(expression))
    
    output = []
    
    for char in expression:
        if char.isalpha() or char.isdigit(): 
            output.append(char)
            
        elif char == '(':  
            stack.push(char)
            
        elif char == ')': 
            while not stack.isEmpty() and stack.peek() != '(':
                output.append(stack.pop())
            stack.pop()  
            
        else: 
            while (not stack.isEmpty() and precedence(stack.peek()) >= precedence(char)):
                output.append(stack.pop())
            stack.push(char)
    
    while not stack.isEmpty():
        output.append(stack.pop())
    
    return ''.join(output)

def evaluate_postfix(expression):
    stack = ArrayStack(len(expression))
    for char in expression:
        if char.isdigit():
            stack.push(int(char))
        elif char.isalpha():
          print("변수가 감지되었습니다.")
          exit()
        else: 
            right = stack.pop()
            left = stack.pop()
            if char == '+':
                stack.push(left + right)
            elif char == '-':
                stack.push(left - right)
            elif char == '*':
                stack.push(left * right)
            elif char == '/':
                if right == 0:
                  print("0으로 나눌 수 없습니다.")
                  exit()
                stack.push(left / right)
    return stack.pop()

# 사용자 입력 받기
expression = input("중위 표기식 수식을 입력해주세요: ")
print("후위 표기식:", infix_to_postfix(expression))
print("계산 결과:", evaluate_postfix(infix_to_postfix(expression)))
