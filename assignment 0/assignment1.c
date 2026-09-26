#include<stdio.h>

int main(){
	float redius, area;
printf("Enter the redius of the circle:");
scanf("%f",&redius);
area = 3.14 * redius * redius;
printf("Area of circale=%.2f\n",area);
return 0;
}