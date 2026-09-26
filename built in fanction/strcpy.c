#include<stdio.h>
#include<string.h>
int main(){
	
	char str[]="patil";
	char pin[20];
	strcpy(pin,str);
	strncpy(pin,str,6);
	pin[6]='\0';
	printf("copied %s\n",pin);
	printf("partial copy %s\n",pin);
	
	
	printf("\n");
	
	
}