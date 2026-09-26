#include<stdio.h>

void main()
{
	
	int n, i,sum=0;
	printf("entera number\n");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(n == sum)
	printf("perfect",i);
	else
	printf("not perfact");
	
	return 0;
	
}