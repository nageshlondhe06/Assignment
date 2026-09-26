#include<stdio.h>
int main()
{
	int age=60;
	if(age<=12){
		printf("child");
	}else if(age>=12&&age<=19){
		printf("teenager");	
		}else if(age>=20&&age<=59){
			printf("adult");
		}else{
			printf("senior");
		}
		}