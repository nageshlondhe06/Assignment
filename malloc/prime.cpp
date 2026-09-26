#include<stdio.h>
#include<stdlib.h>
int isprime(int num){
	if(num<=1)return 1;
	for(int i=2;i<=num/2;i++){
		if(num % i ==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n, i;
	int *arr;
	
	printf("enter size of array");
	scanf("%d",&n);
	
	arr=(int *)malloc(n * sizeof(int));
	if(arr==NULL){
		printf("memory allocation failed\n");
		return 1;
	}
	
	printf("enter %d element\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("prime number in the array are\n");
	for(i=0;i<n;i++){
		if(isprime(arr[i])){
			printf("%d",arr[i]);
		}
	}
	free(arr);
	return 0;
	
}