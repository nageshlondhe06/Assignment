#include<stdio.h>
#include<string.h>
int mystrncmp(const char *s1, const char *s2, int n){
	while(n--&&*s1 &&(*s1==*s2)){
		s1++;
		s2++;
		
	}
	return(n<0)?0:*(unsigned char*)s1-*(unsigned char*)s2;
}
int main(){
	
	char text[]="hello";
	printf("compare first 3 char %d\n",mystrncmp("hello","helium",3));
}
