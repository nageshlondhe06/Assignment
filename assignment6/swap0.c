#include<stdio.h>
void swap(int*a,int*b);
void main(){
	int a=10,b=20;
	printf("before swap a=%d, b=%d",a ,b);
	swap(&a,&b);
	printf("after swap a=%d,b=%d\n",a,b);
	
}

void swap(int *a,int*b){
	int temp=*a;
	*a=*b;
	*b=temp;
	
}