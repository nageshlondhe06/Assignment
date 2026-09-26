#include<stdio.h>
#include<stdlib.h>
int main(){

int n, i;
int *arr, *brr, *crr;

printf("enter size of array");
scanf("%d",&n);

arr=(int *)malloc(n * sizeof(int));
brr=(int *)malloc(n * sizeof(int));
crr=(int *)malloc(n * sizeof(int));

 if(arr==NULL ||brr==NULL ||crr==NULL){
	printf("memory allocation failed!\n");
	return 1;
}

printf("enter %d element for first array\n",n);
for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	
}
printf("enter %d element for second array\n",n);
for(i=0;i<n;i++){
	scanf("%d",&brr[i]);
}

  for(i=0;i<n;i++){
  	crr[i]=arr[i]+brr[i];
  }
  printf("resultltant array (sum of element)\n");
  for(i=0;i<n;i++){
  	printf("%d ",crr[i]);
  }
  free(arr);
  free(brr);
  free(crr);
  return 0;
}
