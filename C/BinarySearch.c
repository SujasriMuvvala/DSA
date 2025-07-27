#include <stdio.h>
int binarySearch(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid; 
        else if (arr[mid] < key)
            low = mid + 1; // Search in right half
        else
            high = mid - 1; // Search in left half
    }

    return -1; // Element not found
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10}; // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the number to be searched: ");
    scanf("%d", &key);

    int index = binarySearch(arr, n, key);

    if(index != -1)
        printf("Element found at index: %d\n", index);
    else
        printf("Element not found\n");

    return 0;
}

