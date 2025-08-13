def BubbleSort(arr):
    n=len(arr)
    for i in range(n - 1):  # Passes
        for j in range(n - i - 1):  # Comparisons in each pass
            if arr[j] > arr[j + 1]:  # Swap if out of order
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

arr = [5, 2, 9, 1, 5, 6]
BubbleSort(arr)
print("Sorted array:", arr)
