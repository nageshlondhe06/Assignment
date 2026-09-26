#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n, i;
	int *arr;
	int min, max;
	
	printf("enter size of array ");
	scanf("%d",&n);
	
	arr=(int *)malloc(n * sizeof(int));
	if(arr== NULL){
		printf("memory allocation failed\n");
		return 1;
	}
	
	printf("enter %d element \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
	}
	
	min=max=arr[0];
	
	for(i=1;i<n;i++){
		if(arr[i]<min){ 
			min=arr[i];
	
	}
	if(arr[i]>max){
		max=arr[i];
	}
		}
		
		printf("minimum element=%d\n",min);
		printf("maximum element =%d\n",max);
		
		free(arr);
		return 0;
		
}