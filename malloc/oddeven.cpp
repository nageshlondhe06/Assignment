#include<stdio.h>
#include<stdlib.h>

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
	
	printf("enter %d element \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
		
	}
	printf("\nEven numbers in the array are:\n");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    
     printf("\nOdd numbers in the array are:\n");
	for(i=0;i<n;i++){
		if(arr[i]%2 !=0){
			printf("%d",arr[i]);
		}
	}
	free(arr);
	return 0;
}