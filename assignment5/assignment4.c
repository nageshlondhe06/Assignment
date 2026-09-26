#include<stdio.h>
void main()
{
	int i, j;
	int n=6;
	for(  i=1; i<=6;i++){
		for( j=1;j<=7;j++){
			if(i==1||i==6||j==1||j==7)
			printf("* ");
			else
			printf("%d ",i+j-2);
			
	}
	printf("\n");
}
}