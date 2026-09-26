#include<stdio.h>
int divisible();
void main(){
	
	int d=divisible();
}







 int divisible()
{
	int num;
	printf("enter your number ");
	scanf("%d",&num);
	if(num%3){
		printf("Divisible by 5 but not by 3");
	}else if(num%5){
		printf("Divisible by 3 but not by 5");
	}else {
		printf("divisible by both no");
	}
	
}