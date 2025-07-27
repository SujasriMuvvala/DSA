int linearsearch(int arr[],int n,int key){
	int i;
	for(i=0;i<n;i++){ 
	if(arr[i]==key){
		return i;
	}
		}
	return -1;
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key;
	printf("Enter the number to be searched:");
	scanf("%d",&key);
	printf("Index:%d",linearsearch(arr,n,key));	
return 0;
}
