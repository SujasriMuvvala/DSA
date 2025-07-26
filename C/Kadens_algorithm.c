#include<stdio.h>
int MaxSubarray(int arr[],int n){
	int max_array=arr[0];
	int current_sum=arr[0];
	int i;
	for(i=1;i<n;i++){
		if(current_sum+arr[i]>arr[i]){
			current_sum=current_sum+arr[i];
		}
		else{
			current_sum=arr[i];
		}
		if(current_sum>max_array){
			max_array=current_sum;
		}
		}
	return max_array;
}
int main(){
	int arr[]={-2,3,-4,-5,8,9,-11,2,5,6,-2};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("Maximum SubArray Sum:%d",MaxSubarray(arr,n));
	return 0;
}

