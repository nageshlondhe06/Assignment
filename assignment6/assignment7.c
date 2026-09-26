#include<stdio.h>

void number();
void main(){
	 number();
	return 0;
}


void number()
{
	int i=1;
	printf("number from 1 to 10 0:\n");
	while(i<=10)
	{
     printf("%d ",i);
		i++;
	}
	printf("\n");
	
}