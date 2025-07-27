def ternary_search(arr, low, high, key):
    if low > high:
        return -1

    mid1 = low + (high - low) // 3
    mid2 = high - (high - low) // 3

    if arr[mid1] == key:
        return mid1
    if arr[mid2] == key:
        return mid2

    if key < arr[mid1]:
        return ternary_search(arr, low, mid1 - 1, key)
    elif key > arr[mid2]:
        return ternary_search(arr, mid2 + 1, high, key)
    else:
        return ternary_search(arr, mid1 + 1, mid2 - 1, key)

# Test
arr = [1, 3, 5, 7, 9, 11, 13]
key = int(input("Enter number to search (Ternary): "))
index = ternary_search(arr, 0, len(arr) - 1, key)

if index != -1:
    print(f"Element found at index {index}")
else:
    print("Element not found")
