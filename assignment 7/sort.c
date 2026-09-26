#include<stdio.h>
int main(){
	
	int arr[5]={4,5,2,7,8};
	int n=5,temp;
	
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j < n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("sorted array");
	for(int i=0;i<n;i++){
		printf ("%d ",arr[i]);
	}
	return 0;
}