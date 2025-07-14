#include<stdio.h>
#include<stdbool.h>
bool isSorted(int arr[],int n){
bool ascending=true;
bool descending=true;
int i;
for(i=0;i<n-1;i++)
{
	if(arr[i]>arr[i+1]){
		ascending=false;
	}
	if(arr[i]<arr[i+1]){
		descending=false;
	}
}
return ascending||descending;
}
int main()
{ int n;
int i;
printf("Enter the number of array elements:");
scanf("%d",&n);
int arr[n];
printf("\nEnter the array elements:");
for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
bool ans=isSorted(arr,n);
if(ans){
	printf("True");
}
else{
	printf("False");
}
return 0;
}
