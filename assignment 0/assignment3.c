#include <stdio.h>
int average();
void main(){
  
  int avg=average();	
//	printf("avg");
	
}




int average() {
    int i;
    float num, sum = 0, average;

    printf("Enter 5 numbers:\n");

    for (i = 1; i <= 5; i++) {
        printf("Number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    average = sum / 5;

    printf("\nThe average of the 5 numbers = %.2f\n", average);

    return 0;
}