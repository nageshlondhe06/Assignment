#include<stdio.h>
int discount();
void main(){
	
	int d=discount();
	
	
}




int discount()
{
   char ch=' ';
  // double no;
  // printf("enter nomber");
  // scanf("%d",&ch);
   double price=600, discount=0.0,totalamount;
   	if (ch == 'y' ) {
        if (price >= 500) {
            discount = 0.20 * price;   
        } else {
            discount = 0.10 * price;   
        }
    } else {
        if (price >= 600) {
            discount = 0.15 * price;   
        } 
            
        
    }
	totalamount = price - discount;


    printf("Purchase price: %.2f\n", price);
    printf("Discount applied: %.2f\n", discount);
    printf("Total amount to pay: %.2f\n", totalamount);

    return 0;
}