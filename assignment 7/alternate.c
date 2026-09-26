#include<stdio.h>
int main(){
	int i;
	int n=8;
	int arr[n];
	printf("enter %d number",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("alternate element in the array");
	for(i=0;i<n;i+=2){
		printf("%d ",arr[i]);
	}
	return 0;
	
	
	
}