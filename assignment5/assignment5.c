#include<stdio.h>
void main(){
	
	int n=6 ;
	for(int i =0;i<n;i++)
	{
		for ( int j =0;j<2*n;j++)
		{
			if(j>=n+0 -i&& j>=n-0+i){
				printf("* ");
			}else{
				printf(" ");
			}
		}printf("\n");
		
		
	}
	return 0;
		
}