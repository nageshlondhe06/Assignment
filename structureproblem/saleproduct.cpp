#include<stdio.h>
#include<string.h>

struct product {
	char name[50];
	float price;
	int quatity;
	
};

void addproduct(struct product cart[], int *count){
	printf("enter prodect name");
	scanf("%s",cart[*count].name);
	
	printf("enter product price");
	scanf("%f", &cart[*count].price);
	
	printf("enter product quatity");
	scanf("%d",&cart[*count].quatity);
	
	(*count)++;
	
}

void displaycart(struct product cart[],int count){
	printf("cart item\n");
	for(int i=0;i<count;i++){
		printf("%d. %s | price %2f |quatity %d |subtotal %2f\n", i+1, cart[i].name, cart[i].price, cart[i].quatity,cart[i].price * cart[i].quatity);
		
	}
}
float calculatetotal(struct product cart[], int count){
	float total=0;
	for(int i=0;i<count;i++){
		total+=cart[i].price *cart[i].quatity;
	}
	return total;
}

int main(){
	struct product cart[20];
	int count=0;
	int choice;
	
	do{
		printf("point in sale menu");
		printf("1.add product\n");
		printf("2.view cart\n");
		printf("3. checkout\n");
		printf("exit\n");
		printf("enter choice");
		scanf("%d",&choice);
		
		switch (choice){
			case 1:
			addproduct(cart,&count);
			break;
			case 2:
			displaycart(cart,count);
			break;
			case 3:
			displaycart(cart, count);
			printf("total cast=%2f\n",calculatetotal(cart, count));
			break;
			case 4:
			printf("exiting pos system..\n");
			break;
			default:
			printf("invalid choice! try again.\n");
			
			
		}
	}while(choice!=4);
	return 0;
}