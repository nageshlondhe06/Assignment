#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i,sum=0;
	int *arr;
	
	printf("enter size of array");
	scanf("%d",&n);
	
	arr=(int *)malloc(n * sizeof(int));
	if(arr==NULL){
		printf("memory allocatin failed!\n");
		return 1;
	}
	printf("enter %d element \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		sum +=arr[i];
	}
	
	printf("sum of all element =%d\n",sum);
	free(arr);
	return 0;
}