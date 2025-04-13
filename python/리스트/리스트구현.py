capacity = 100
array = [None] * capacity
size = 0

def isEmpty():
    return size == 0

def isFull():
    return size == capacity

def insert(pos, e):
    global size 
    if not isFull() and 0 <= pos <= size:
        for i in range(size, pos, -1):
            array[i] = array[i - 1]
        array[pos] = e
        size += 1
    else:
        print("리스트 overflow 또는 유효하지 않은 삽입 위치")
        exit()

def delete(pos):
    global size
    if not isEmpty() and 0 <= pos < size:
        e = array[pos]
        for i in range(pos, size - 1):
            array[i] = array[i + 1]
        array[size - 1] = None  
        size -= 1
        return e
    else:
        print("유효하지 않은 삭제 위치")
        exit()

insert(0, 10)
insert(1, 20)
print(array[:size])

print(isFull())

print(delete(0))
print(array[:size])

print(isEmpty())
