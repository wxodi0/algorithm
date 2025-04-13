a = [1, 3, 4, 9]
b = [2, 3, 6]

c = []

ai = 0
bi = 0

while ai < len(a) and bi < len(b):
    if a[ai] < b[bi]:
        c.append(a[ai])
        ai += 1
    elif a[ai] > b[bi]:
        c.append(b[bi])
        bi += 1
    else:
        c.append(a[ai])
        c.append(b[bi])
        ai += 1
        bi += 1

# Add remaining elements from a if any
while ai < len(a):
    c.append(a[ai])
    ai += 1

# Add remaining elements from b if any
while bi < len(b):
    c.append(b[bi])
    bi += 1

print(c)
