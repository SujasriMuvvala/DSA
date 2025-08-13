#include<stdio.h>
int BubbleSort(int arr[],int n){
	int i,j;
for(i=0;i<n;i++){
	for(j=0;j<n-i-1;j++){
		if(arr[j]>arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
}
}
int main(){
	int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, n);
	int i;
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
