#include<stdio.h>
#include<string.h>


struct student{
	int rollno;
	char name[20];
	int marks;
	
};

int main(){
	
	struct student s1,s2;
    
    
	s1.rollno=101;
	strcpy(s1.name, "tejas");
	s1.marks=67;
	
	
	
	printf("s1.rollno=%d\n",s1.rollno );
	printf("s1.name=%s\n",s1.name);
	printf("s1.marks=%d\n",s1.marks);
	
	
	
	printf("\nEnter s2.rollno, s2.name, s2.marks:\n");
    scanf("%d %s %d", &s2.rollno, s2.name, &s2.marks);

    printf("s2.rollno = %d\n", s2.rollno);
    printf("s2.name = %s\n", s2.name);
    printf("s2.marks = %d\n", s2.marks);
	
	
	return 0;
	
	
}