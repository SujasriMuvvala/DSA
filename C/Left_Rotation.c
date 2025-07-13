#include <stdio.h>

// Function to left rotate the array by 1 position
void leftRotateByOne(int arr[], int n) {
    int temp = arr[0];
    int i;

    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = temp;
}

// Function to left rotate the array by k positions using rotateByOne
void leftRotateByK(int arr[], int n, int k) {
    k = k % n;  // Normalize k

    if (k == 0) {
        // No rotation needed
        return;
    }
    int i;

    for (i = 0; i < k; i++) {
        leftRotateByOne(arr, n);
    }
}

// Function to print the array
void printArray(int arr[], int n) {
	int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    printf("Original array:\n");
    printArray(arr, n);

    printf("Enter value of k (positions to rotate): ");
    scanf("%d", &k);

    leftRotateByK(arr, n, k);

    printf("Array after left rotation by %d positions:\n", k);
    printArray(arr, n);

    return 0;
}

