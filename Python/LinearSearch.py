def linear_search(arr, key):
    for i in range(len(arr)):
        if arr[i] == key:
            return i
    return -1

# Test
arr = [4, 2, 7, 1, 9, 5]
key = int(input("Enter number to search (Linear): "))
index = linear_search(arr, key)

if index != -1:
    print(f"Element found at index {index}")
else:
    print("Element not found")
