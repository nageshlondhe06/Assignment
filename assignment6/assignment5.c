#include <stdio.h>

int evenodd();
void main(){
	
int x=evenodd();

	
}

int evenodd() {
    int no; 
	printf("enter anumber"); 
scanf("%d",&no);
    if (no % 2 == 0) {
        printf("%d even",no);
    } else {
        printf("1");
    }
    printf("\n");
    return 0;
}