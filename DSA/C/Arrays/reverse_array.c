#include <stdio.h>

void reverseArray(int arr[], int size) {
    printf("Reversed array: ");
    int i;
    for(i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);

    return 0;
}
