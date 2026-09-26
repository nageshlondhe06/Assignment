#include<stdio.h>
#include<string.h>
struct salesmanager{
	int id;
	char name[30];
	float salary;
	float incentive;
	int target;
};

struct date{
	int day;
	int month;
	int year;
};

int main(){
	struct salesmanager sm1={101,"ramesh",45000,2300,27	};
	printf("salesmanager %d %s %2f %2f %d",sm1.id, sm1.name, sm1.salary, sm1.incentive, sm1.target);

printf("\n");
struct date d1{6, 4, 2004};
printf("date %d %d %d",d1.day, d1.month, d1.year);

}