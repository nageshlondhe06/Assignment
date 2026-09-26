#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int n1,n2, i, j;
	int *arr1,*arr2, *merged;
	
	printf("enter size of first array ");
	scanf("%d",&n1);
	printf("enter size of second array ");
	scanf("%d",&n2);
	
	arr1=(int *)malloc(n1 * sizeof(int));
	arr2=(int *)malloc(n2 * sizeof(int));
	merged=(int *)malloc((n1 +n2) * sizeof(int));
    
    if(arr1==NULL ||arr2==NULL ||merged==NULL){
    	printf("memory allocation failed!\n");
    	return 1;
	}
	printf("enter %d element for first array\n",n1);
	for(i=0;i<n1;i++){
		scanf("%d",&arr1[i]);
	}
	printf("enter %d element for second array\n",n2);
	for(i=0;i<n2;i++){
		scanf("%d",arr2[i]);
	}
	for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        merged[n1 + j] = arr2[j];
    }
    printf("\nMerged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
     free(arr1);
    free(arr2);
    free(merged);

    return 0;
    
}