#include<stdio.h>
struct time{
	int hrs;
	int min;
	int sec;
	
};
int tosecond(struct time t){
	return (t.hrs * 3600)+(t.min * 60)+t.sec;
	
}
struct time  addtime(struct time t1, struct time t2){
	struct time result;
	
	result.sec = t1.sec +t2.sec;
	result.min = t1.min +t2.min;
	result.hrs = t1.hrs +t2.hrs;
	
	if(result.sec >=60){
		result.hrs +=result.sec / 60;
		result.min =result.sec % 60;
		
	}
	if(result.min >=60){
		result.hrs +=result.min / 60;
		result.min =result.min % 60;
	}
			return result;
			
}
int main(){
	struct time t1, t2, sum;
	
	printf("enter first time(hrs min sec)\n");
	scanf("%d %d %d",&t1.hrs, &t1.min, &t1.sec );
	
	printf("enter second time(hrs min sec)\n");
	scanf("%d %d %d",&t2.hrs, &t2.min, &t2.sec );
     
     printf("first time %02d %02d %02d\n",t1.hrs, t1.min, t1.sec );
     printf("second time %02d %02d %02d\n", t2.hrs, t2.min, t2.sec);
     
     sum=addtime(t1, t2);
     printf("sum of time  %02d %02d %02d\n",sum.hrs, sum.min, sum.sec );
     
     printf("first time in second %d\n",tosecond(t1));
     printf("second time in seconds %d\n",tosecond(t2));
     printf("sum of time in second %d\n",tosecond(sum));
     
     return 0;
}