#include <stdio.h>
#include <stdlib.h>

void movezero(int arr[], int n) {
    int index = 0;
    int i;  // declare loop variable outside

    // Move all non-zero elements to the front
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    // Fill remaining positions with zeroes
    for(i = index; i < n; i++) {
        arr[i] = 0;
    }
}

int main() {
    int n, i, j;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    movezero(arr, n);

    printf("Array after moving zeroes to the end: ");
    for(j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}

