#include<stdio.h>

struct book{
	char name[50];
	int id;
	char author[50];
	float price;
	
};

int main(){
	struct book b;
	
	printf("enter book name");
	scanf("%49s",b.name);
	
	printf("enter book id");
	scanf("%d",&b.id);
	
	printf("enter author name");
	scanf("%49s",b.author);
	
	printf("enter book price");
	scanf("%f",&b.price );
	
	printf("book details \n");
	printf("book name %s\n",b.name);
	printf("book id %d\n",b.id );
	printf("book author %s\n",b.author );
	printf("book price %f\n",b.price );
	return 0;
	
}