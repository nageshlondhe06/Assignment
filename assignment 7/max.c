#include<stdio.h>
int main(){
	int arr[5];
	int size=5;
	int min,max;
	printf("enter 5 number");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	min=arr[0];
	max=arr[0];
	
	for(int i=0;i<size;i++){
	    if(arr[i]<min)min=arr[i];
		if(arr[i]>max)max=arr[i];	
			}
	printf("minimum %d\n",min);
	printf("maximum %d\n",max);
	return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
