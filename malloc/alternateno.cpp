#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, i;
	int *arr;
	
	printf("enter size of arr");
	scanf("%d",&n);
	
	arr=(int *)malloc(n * sizeof(int));
	if(arr==NULL){
		printf("memory allocatin failed!");
		return 1;
	}
	
	printf("enter %d element \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	 
	 printf("alternate element in the array are \n");
	 for(i=0;i<n;i +=2){
	 	printf("%d\n",arr[i]);
	 }
	 free(arr);
	 return 0;
}