import time

start = time.time()
def factorial(n):
  if n == 1 :
    return 1
  else :
    return n * factorial(n - 1)

# a = input()

# factorial(a)

n = int(input())
print(f"{factorial(n)}")

end = time.time()

print(f"{end - start:.5f} sec")