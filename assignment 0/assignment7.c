#include<stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5;
	int total;
	double percentage;
	 printf("enter mark of five subject:");
	 scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
	 total=sub1 +sub2 +sub3 +sub4 +sub5;
	 percentage =(total/500.0)*100;
	 printf("total mark =%d\n",total);
	 printf("percentage =%2f\n",percentage);
	 return 0;
}