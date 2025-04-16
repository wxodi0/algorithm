def infix_to_postfix(expression):
    # 연산자의 우선순위를 정의
    precedence = {'+': 1, '-': 1, '*': 2, '/': 2}
    postfix = []
    stack = []

    for char in expression:
        if char.isalnum():  # 피연산자인 경우 바로 출력합니다.
            postfix.append(char)
        elif char == '(':
            stack.append(char)
        elif char == ')':
            while stack and stack[-1] != '(':
                postfix.append(stack.pop())
            stack.pop()  # '(' 제거
        else:  # 연산자인 경우
            while (stack and stack[-1] != '(' and
                   precedence.get(stack[-1], 0) >= precedence.get(char, 0)):
                postfix.append(stack.pop())
            stack.append(char)

    while stack:
        postfix.append(stack.pop())

    return ''.join(postfix)


expressions = [
    "(A/B)*C",
    "A+(B*C)-D/E",
    "(X+Y)-(W*Z)/V",
    "U*V*W+X-Y",
    "A/B*C-D+E",
    "A*(B+C)/D-E"
]

for expression in expressions:
    postfix = infix_to_postfix(expression)
    print(f"Infix: {expression} => Postfix: {postfix}")
