#include<stdio.h>
int remdup(int arr[],int n){
	if(n<=1){
		return n;
	}
	int i;
	int index=1;
	for(i=1;i<n;i++){
	if(arr[i]!=arr[i-1]){
		arr[index++]=arr[i];
	}
}
    return index;
		}
	int main(){
		int arr[]={1,3,4,4,4,5,6,7,8,8,8,9,10};
		int n=sizeof(arr)/sizeof(arr[0]);
		int newarr=remdup(arr,n);
		int i;
		for(i=0;i<newarr;i++){
			printf("%d\t",arr[i]);
		}
	return 0;
	}
	
