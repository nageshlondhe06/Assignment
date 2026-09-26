#include<stdio.h>
#include<string.h>
struct product{
	int id;
	char name[30];
	int quantity;
};
int main(){
	struct product p1={101, "laptop", 20
	};
	printf("product %d %s %d",p1.id, p1.name, p1.quantity);
	return 0;
}