#include<stdio.h>
#include<string.h>
struct time{
	int hour;
	int min;
	int sec;
};
struct distance{
	int feet;
	int inch;
	
};
struct complex{
	float real;
	float imaginary;
};
int main(){
	
	struct time t1={10,10, 30	};
	printf("time %d %d %d",t1.hour, t1.min, t1.sec);
	printf("\n");
	
	struct distance d1={5 ,8
	};
	printf("distance %d %d",d1.feet, d1.inch);
	printf("\n");
	
	struct complex c1={3.2, -2.1
	};
	printf("complex %2f %2f", c1.real, c1.imaginary);
}