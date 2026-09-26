#include<stdio.h>
int prime();
void main(){
	
 int x=prime( );
	
	return 0;
}



int prime()
{
	int n ;
	printf("enter anumber");
	scanf("%d",&n);
	int i , prime =1;
	if(n<=1){prime =0;
	
	}else{
		for(i =2; i<=n/2;i++){
			if (n %i ==0){
				prime =0;
				break;
			}
		}
	}
	if(prime)
	printf("1");
	else
	printf("0 ");
}