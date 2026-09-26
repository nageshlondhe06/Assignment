#include<stdio.h>
void mystrcat(char *dest,const char *src){
	while(*dest){
		dest++;
	}
	while(*src){
		*dest=*src;
		dest++;
		src++;
	}
	*dest='\0';
}
int main(){
	
	char str1[50]="hello";
	char str2[]="world";
	
	mystrcat(str1, str2);
	printf("concatenated string %s\n",str1);
	return 0;
}