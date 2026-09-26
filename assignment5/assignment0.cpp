#include<stdio.h>
int main(){
int col,row;
int n=5;

   for(row=n;row>=1;row--){
   	for(col=1;col<=row;col++){
	
   		printf("%d",col);
   	
	   }
	   printf("\n");
   }
	
}