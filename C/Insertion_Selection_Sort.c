#include <stdio.h>

// Selection Sort
void selectionSort(int arr[], int n) {
	int i,j;
    for (i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// Insertion Sort
void insertionSort(int arr[], int n) {
	int i;
    for (i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        // Shift elements to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Function to print array
void printArray(int arr[], int n) {
	int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int choice;

    printf("Choose Sorting Method:\n");
    printf("1. Selection Sort\n");
    printf("2. Insertion Sort\n");
    scanf("%d", &choice);

    if (choice == 1) {
        selectionSort(arr, n);
        printf("Sorted array using Selection Sort: ");
    } 
    else if (choice == 2) {
        insertionSort(arr, n);
        printf("Sorted array using Insertion Sort: ");
    } 
    else {
        printf("Invalid choice\n");
        return 0;
    }

    printArray(arr, n);
    return 0;
}

