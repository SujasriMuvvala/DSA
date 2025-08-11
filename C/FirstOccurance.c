#include <stdio.h>

int firstOccurrence(int arr[], int n, int key) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == key) {
            result = mid;       
            high = mid - 1;  
        }
        else if (arr[mid] > key) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    
    int index = firstOccurrence(arr, n, key);
    if (index != -1)
        printf("First occurrence of %d is at index %d\n", key, index);
    else
        printf("%d not found in array\n", key);
    
    return 0;
}

