#include<stdio.h>
int perfect( );
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (perfect(n) == n)
        printf("Perfect\n");
    else
        printf("Not Perfect\n");

    return 0;
}





int perfect( int n)
{
	
	int  i,sum=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
		
	}
 return sum;
	
	
	
}