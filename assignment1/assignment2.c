#include <stdio.h>

int evenodd();
void main(){
	
int x=evenodd();	
	
}


int evenodd() {
    int no; 
	printf("enter 5 anumber"); 
scanf("%d",&no);
    if (no % 2 == 0) {
        printf("even");
    } else {
        printf("odd");
    }

    
}