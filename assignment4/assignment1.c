#include<stdio.h>
void main()
{
	int n=50;
	int i,j,prime;
	for(i=2;i<=n; i++){
		prime =1;
		
		for(j=2;j<=i/2;j++){
			if(i %j ==0){
				prime =0;
				break;
			}
		}
		if(prime==1){
			printf("%d ",i);
		}
	}
	printf("/n");
}