#include <stdio.h>

int SecondOccurrence(int arr[], int n, int key) {
    int count = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
            if (count == 2) { // Second occurrence found
                return i;
            }
        }
    }
    return -1; // No second occurrence
}

int main() {
    int arr[] = {1, 2, 3, 3, 4, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;

    int index = SecondOccurrence(arr, n, key);

    if (index != -1) {
        printf("Second occurrence index: %d\n", index);
    } else {
        printf("No second occurrence found\n");
    }

    return 0;
}

