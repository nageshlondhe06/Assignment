#include<stdio.h>

int main(){
	int year =2004;
	if((year %400==0)||(year % 100!=0 &&year % 4== 0)){
		printf("%d is aleap year\n",year);
	
	}else 
	printf("%d is not a leaf year\n",year);
}