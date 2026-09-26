#include<stdio.h>
 
 int mystrlen(const char *str){
 	int len=0;
 	while(*str++) len++;
 	return len;
 }
 
 
 void mystrrev(char *str){
 	int i=0,j=mystrlen(str)-1;
 	while(i<j){
 		char temp=str[i];
 		str[i]=str[j];
 		str[j]=temp;
 		i++;
 		j--;
	 }
 }
 int main(){
 	char text[]="copilot";
 	mystrrev(text);
 	printf("Reversed %s\n",text);
 	return 0;
 	
 	
 }