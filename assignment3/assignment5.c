#include<stdio.h>

void main(){
	int n=6,i,sum=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(n == sum)
	printf("perfect");
	else
	printf("not perfact");
	
	return 0;
	
}