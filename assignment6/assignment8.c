#include<stdio.h>

void number();
int armstrong(int n);
int main(){
	number();
	return 0;
}



void number(){
	int n;
	printf("enter a number");
	scanf("%d",&n);
	
	if(armstrong(n))
	printf("armstrong");
	else
	printf("not armstrong");
	
}

int armstrong(int n){
	int temp=n,sum=0,digits=0;
	int t=n;
	while(t>0){
		digits++;
		t/=10;
}
while(temp>0){

	int rem=temp%10;
	sum +=pow(rem,digits);
	temp/=10;
}
return(sum==n);
}