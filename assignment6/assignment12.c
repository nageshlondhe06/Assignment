#include<stdio.h>
int checkstrong(num);

void main(){
	
	int num;
	printf("enter a number");
	scanf("%d",&num);
	
	checkstrong(num);
	return 0;
}

 int checkstrong(int n){
	int rem,fact,sum=0;
	int temp=n;
	
	while(temp>0)
	{
		rem=temp%10;
		fact=1;
		for(int i=1;i<=rem;i++){
			fact=fact*i;
		}
		sum=sum+fact;
		temp=temp/10;
	}
	if(n==sum)
	printf("%d is a strong number\n",n);
	else
	printf("%d is a not strong number\n",n);
}
