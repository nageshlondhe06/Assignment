#include<stdio.h>
int main(){
	
	int arr[5]={1,2,3,4,5};
	int n=5;
	
	
	printf("reversed array");
	for(int i=n-1;i>=0;i--){
		printf("%u",arr[i]);
	}
	return 0;
}