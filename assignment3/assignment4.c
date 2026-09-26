#include<stdio.h>
void main()
{
	int n =7;
	int i , prime =1;
	if(n<=1){
	prime =0;
	}else{
		for(i =2; i<=n/2;i++){
			if (n %i ==0){
				prime =0;
				break;
			}
		}
	}
	if(prime)
	printf("prime");
	else
	printf("not prime ");
}