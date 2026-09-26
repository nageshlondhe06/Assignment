#include<stdio.h>
#include<string.h>
struct Employee{
	int id;
	char name[30];
	float salary;
};

struct HR{
	int id;
	char name[30];
	float salary;
	float commission;
};

struct admin {
	int id;
	char name[30];
	float salary;
	float allowance;
};


int main(){
	struct Employee s1={101, "patil", 70000
	};
	printf("Employee ID %d, name %s, salary %2f\n",s1.id, s1.name, s1.salary);
	
	
	printf("\n");
	 
	 struct HR h1={301,"nagesh",50000,4000
	 };
	 printf("hr %d %s %2f %2f\n",h1.id, h1.name, h1.salary, h1.commission);
	 
	 printf("\n");
	 
	 struct admin a1={201, "malipatil", 50000, 6000	 };
	 printf("admin %d %s %2f %2f\n",a1.id, a1.name, a1.salary, a1.allowance);
}