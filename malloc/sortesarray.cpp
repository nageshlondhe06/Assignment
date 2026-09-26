#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, i, j, temp;
	int *arr;
	
	 printf("enter size of array");
	 scanf("%d",&n);
	 
	 arr=(int *)malloc(n * sizeof(int));
	 if(arr==NULL){
	 	printf("memory allocation failed!\n");
	 	return 1;
	 }
	 
	 printf("enter %d element\n",n);
	 for(i=0;i<n;i++){
	 	scanf("%d",&arr[i]);
	 }
	 for(i=0;i<n-1;i++){
	 	for(j=0;j<n-i-1;j++){
	 	  if(arr[j]>arr[j+1]){
	 	  	temp=arr[j];
	 	  	arr[j]=arr[j+1];
	 	  	arr[j+1]=temp;
	 	  	
		   }
		 }
	 }
	 
	 printf("sorted array in ascending order\n");
	 for(i=0;i<n;i++){
	 	printf("%d ",arr[i]);
	 }
	 free(arr);
	 return 0;
	 
}