#include<stdio.h>


int main(){
	int limit;
	printf("enter limit\n");
	scanf("%d",&limit);
	
	findarmstrong(limit);
	return 0;
}
 void findarmstrong(int n){
 	int i,rem,temp,sum,digits;
 	
 	for(i=1;i<=n;i++){
 		temp=i;
 		sum=0;
 		
 		digits=0;
 		int t=temp;
 		while(t>0){
 			digits++;
 			t/=10;
		 }
		 for(t=temp;t>0;t/=10){
		 	rem=t%10;
		 	sum+=(int)pow(rem,digits);
		 }
		 if(sum==i){
		 	printf("%d ",i);
		 }
	 }
 }