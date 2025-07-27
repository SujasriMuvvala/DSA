#include <stdio.h>

// Recursive function for Ternary Search
int ternarySearch(int arr[], int low, int high, int key) {
    if (low > high)
        return -1;

    int mid1 = low + (high - low) / 3;
    int mid2 = high - (high - low) / 3;

    if (arr[mid1] == key)
        return mid1;
    if (arr[mid2] == key)
        return mid2;

    if (key < arr[mid1])
        return ternarySearch(arr, low, mid1 - 1, key);
    else if (key > arr[mid2])
        return ternarySearch(arr, mid2 + 1, high, key);
    else
        return ternarySearch(arr, mid1 + 1, mid2 - 1, key);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the number to be searched: ");
    scanf("%d", &key);

    int index = ternarySearch(arr, 0, n - 1, key);

    if (index != -1)
        printf("Element found at index: %d\n", index);
    else
        printf("Element not found.\n");

    return 0;
}

