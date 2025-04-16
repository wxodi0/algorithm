import time

start = time.time()

def factorial(n):
    result = 1
    for i in range(1, n + 1):
        result *= i
    return result

# a = input()

# factorial(a)

n = int(input())
print(f"{factorial(n)}")
end = time.time()

print(f"{end - start:.5f} sec")