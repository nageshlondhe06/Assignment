#include<stdio.h>
#include<ctype.h>
void mystrlower(char *str){
	while(*str){
		*str= tolower(*str);
		str++;
	}
}
int main(){
	
	char text[]="HELLO COPILOT";
	mystrlower(text);
	printf("Loweecase %s\n",text);
	return 0;
}