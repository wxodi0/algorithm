def binary_search(arr, target):
    left, right = 0, len(arr) - 1

    while left <= right:
        mid = (left + right) // 2  # 중간 인덱스를 계산합니다.

        # 중간 요소와 목표 값을 비교합니다.
        if arr[mid] == target:
            return mid  # 목표 값을 찾았으면 인덱스를 반환합니다.
        elif arr[mid] < target:
            left = mid + 1  # 목표 값이 중간 요소보다 크면 오른쪽 절반을 탐색합니다.
        else:
            right = mid - 1  # 목표 값이 중간 요소보다 작으면 왼쪽 절반을 탐색합니다.

    return -1  # 목표 값을 찾지 못한 경우 -1을 반환합니다.

data = [3, 15, 24, 36, 47, 47, 58, 69]
target = int(input())

index = binary_search(data, target)

if index != -1:
    print(f"Value {target} found at index {index}")
else:
    print("값이 존재하지 않습니다.")
