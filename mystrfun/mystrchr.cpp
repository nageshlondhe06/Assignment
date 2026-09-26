#include<stdio.h>
#include<string.h>
 char*mystrchr(const char *str, int ch){
 	while(*str){
 		if (*str==ch) return(char*)str;
 		str++;
	 }
	 return NULL;
 }
 
 int main(){
 	
 	char text[]="hello oop";
	 char *ops=mystrchr(text,'o');
	 printf("first 'o' found at %s\n", ops);
 }