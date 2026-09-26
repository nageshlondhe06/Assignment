#include<stdio.h>
int main(){
	int arr[5];
	int size=5;
	int sum=0;
	printf("enter 5 number");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	 for(int i=0;i<size;i++){
	 	sum+=arr[i];
	 }
	 printf("sum of all number %d",sum);
	 return 0;
	
}