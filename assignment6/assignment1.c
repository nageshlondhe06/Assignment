#include<stdio.h>
int redius(int);
int main(){
	
int r=radius();
	return 0;
}





int radius()
{
	
	float redius, area;
printf("Enter the redius of the circle:");
scanf("%f",&redius);
area = 3.14 * redius * redius;
printf("Area of circale=%.2f\n",area);

}