#include<stdio.h>
int main(){
int i;
int n=5;
//printf("enter  array number");
//scanf("%d",&n);
	int arr[n];
	printf("enter %d number",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("even number in the array");
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			printf("%d ",arr[i]);
		}
	}
	printf("odd number in the array");
	for(i=0;i<n;i++){
		if(arr[i]%2!=0){
			printf("%d ",arr[i]);
		}
	}
	return 0;
}