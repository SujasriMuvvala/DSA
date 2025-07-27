def binary_search(arr, key):
    low = 0
    high = len(arr) - 1

    while low <= high:
        mid = (low + high) // 2

        if arr[mid] == key:
            return mid
        elif arr[mid] < key:
            low = mid + 1
        else:
            high = mid - 1

    return -1

# Test
arr = [1, 3, 5, 7, 9, 11]
key = int(input("Enter number to search (Binary): "))
index = binary_search(arr, key)

if index != -1:
    print(f"Element found at index {index}")
else:
    print("Element not found")
