def remdup(arr, n):
    if n <= 1:
        return n

    index = 1

    for i in range(1, n):
        if arr[i] != arr[index - 1]:
            arr[index] = arr[i]
            index += 1

    return index

# Input array (must be sorted)
arr = [1, 2, 3, 4, 5, 6, 6, 7, 7, 8, 8, 10]
n = len(arr)

# Remove duplicates
new_length = remdup(arr, n)

# Print the unique part of the array
print("Array after removing duplicates:")
for i in range(new_length):
    print(arr[i], end=' ')
