def move_zeroes(arr):
    index = 0  # pointer for non-zero elements

    # Move all non-zero elements to the front
    for i in range(len(arr)):
        if arr[i] != 0:
            arr[index] = arr[i]
            index += 1

    # Fill remaining positions with zeroes
    for i in range(index, len(arr)):
        arr[i] = 0

# Input
n = int(input("Enter the size of the array: "))
arr = list(map(int, input(f"Enter {n} elements: ").split()))

move_zeroes(arr)

# Output
print("Array after moving zeroes to the end:", *arr)
