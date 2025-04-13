import time

start = time.time()

def insertion_sort(arr):
    # 두 번째 요소부터 리스트의 끝까지 반복합니다.
    for i in range(1, len(arr)):
        # 현재 요소를 key로 설정합니다.
        key = arr[i]
        # key보다 큰 요소들을 오른쪽으로 이동시킵니다.
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        # key를 올바른 위치에 삽입합니다.
        arr[j + 1] = key
    return arr

# 주어진 리스트
data = [47, 24, 69, 36, 3, 58, 47, 15]

# 삽입 정렬을 사용하여 정렬합니다.
sorted_data = insertion_sort(data)
print(sorted_data)
end = time.time()

print(f"{end - start:.10f} sec")