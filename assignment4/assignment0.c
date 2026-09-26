#include<stdio.h>
void main(){
	int n=1000;
	int i, temp, rem, sum, digits;
	
	for(i =1;i<=n;i++){
	temp =i;
	sum =0;
	
	digits =0;
	int t=temp;
	for ( t=temp;t>0; t/=10){
		digits++;
	}
	for(t =temp;t>0;t/=10){
		rem =t%10;
		sum +=(int)pow(rem,digits);
	}
	if (sum ==i){
		printf("%d ",i);
	}
	}
}