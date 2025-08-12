def second_occurrence(arr, key):
    count = 0
    for i in range(len(arr)):
        if arr[i] == key:
            count += 1
            if count == 2:
                return i
    return -1  # Not found twice

arr = [5, 3, 7, 3, 9, 3]
key = 3
print("Second occurrence index:", second_occurrence(arr, key))
