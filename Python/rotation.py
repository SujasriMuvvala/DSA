def left_rotate_by_one(arr):
    first = arr.pop(0)
    arr.append(first)
    return arr
def left_rotate_k_times(arr, k):
    for _ in range(k):
        arr = left_rotate_by_one(arr)
    return arr
if __name__ == "__main__":
    n = int(input("Enter number of elements: "))
    arr = []

    print("Enter the array elements:")
    for _ in range(n):
        arr.append(int(input()))

    k = int(input("Enter how many times to rotate left: "))

    rotated = left_rotate_k_times(arr, k)
    print("Array after", k, "left rotations:", rotated)
