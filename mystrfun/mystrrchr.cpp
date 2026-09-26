#include<stdio.h>
#include<string.h>
 
 char*mystrrchr(const char *str, int ch){
 	const char *last=NULL;
 	while(*str){
 		if(*str==ch) last =str;
 		str++;
	 }
	 return (char*)last;
 }
 
 int main(){
 	
 	char text[]="Hello copilot";
 	char *ops=mystrrchr(text, 'o');
 	printf("last 'o' found at %s\n",ops);
 }