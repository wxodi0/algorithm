n = 5

w = [10, 20, 30, 40, 50]
value = [60, 100, 120, 70, 85]

# num = 10

max = 0

for num in range(2**n):
  s = [0] * n
  sum = 0

  for d in range(n):
    s[d] = num % 2
    num = num // 2
    if s[d] == 1:
      sum += w[d]
  if sum <= 80:
    print(s, sum)
  
