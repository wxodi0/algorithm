import time

start = time.time()

def selection_sort(arr):
    for i in range(len(arr)):
        # 현재 위치를 최소값으로 가정
        min_idx = i
        # 현재 위치 다음부터 리스트의 끝까지 반복
        for j in range(i+1, len(arr)):
            # 더 작은 값을 찾으면 최소값 인덱스를 갱신
            if arr[j] < arr[min_idx]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
    return arr

data = [47, 24, 69, 36, 3, 58, 47, 15]

sorted_data = selection_sort(data)
print(sorted_data)

end = time.time()

print(f"{end - start:.10f} sec")
