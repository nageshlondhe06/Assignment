#include<stdio.h>

void mystrcpy(char *dest,const char *src){
	while(*src){
		*dest =*src;
		dest++;
		src++;
	}
	*dest='\0';
}
int main(){
	
	char source[]="hello copilot!";
	char destination[50];
	mystrcpy(destination,source);
	
	printf("source %s\n",source);
	printf("destination %s\n",destination);
	return 0;
	
}