#include<stdio.h>
#include<stdlib.h>

int  main(){
	int n, i, key, found=0;
	int *arr;
	
	printf("enter size of array");
	scanf("%d",&n);
	
	arr=(int *)malloc(n * sizeof(int));
	if(arr==NULL){
		printf("memory allocatin failed!\n");
		return 1;
	}
	
	printf("enter %d element \n", n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter number to nsearch ");
	scanf("%d",&key);
	
	for(i=0;i<n;i++){
		if(arr[i]==key){
			printf("number %d found at position %d\n",key,i+1);
			found= 1;
			break;
		}
	}
	if(!found)
	printf("number %d not found in array\n",key);
	
	free(arr);
	return 0;
	
}