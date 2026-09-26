#include<stdio.h>
void main(){
	int n=145, rem, fact,sum=0;
	int temp=n;
	while (temp>0){
		rem=temp%10;
		fact=1;
		for(int i=1;i<=rem;i++){
			fact=fact*i;
		}
		temp=temp/10;
		sum=fact+sum;
	}
	if(n==sum)
	printf("strong");
	else
	printf("not strong ");
	return 0;
}