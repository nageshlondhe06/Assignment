#include<stdio.h>
int evenodd();
void main()
{
	int x= evenodd();
	
}


int evenodd(){
	int no;
	printf("enter is a number");
	scanf("%d",&no);
	if(no%2==0)
	printf("even");
	else
	printf("odd");
	
	return 0 ;
}