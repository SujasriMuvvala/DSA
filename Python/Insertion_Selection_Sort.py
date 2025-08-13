# Selection Sort
def selection_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]

# Insertion Sort
def insertion_sort(arr):
    n = len(arr)
    for i in range(1, n):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key

# Main program
arr = [64, 25, 12, 22, 11]
choice = int(input("Choose Sorting Method:\n1. Selection Sort\n2. Insertion Sort\n"))

if choice == 1:
    selection_sort(arr)
    print("Sorted array using Selection Sort:", arr)
elif choice == 2:
    insertion_sort(arr)
    print("Sorted array using Insertion Sort:", arr)
else:
    print("Invalid choice")
