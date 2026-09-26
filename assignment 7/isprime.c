#include<stdio.h>
int isprime(int num);
int main(){
	
	int i;
	int n=5;
	int arr[n];
	printf("enter size of array");
	scanf("%d",&n);
//	int arr[n];
	printf("enter%d number ",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("prime number in the array");
	for(i=0;i<n;i++){
		if(isprime(arr[i])){
			printf("%d",arr[i]);
		}
	}
}
int isprime(int num){
	if(num<=1);
	for(int i=2;i<num/2;i++){
		if(num%i==0){
			return 0;
		}
	}
	return 0;
}