#include<stdio.h>
void main()
{
	int s1=5, s2=3, s3=3;
	if(s1==s2 &&s2==s3){
		printf("equileteral");
	}else if(s1==s2||s2==s3||s3==s1){
		printf("isoleteral");
	}else{
		printf("scalene");
	}
}