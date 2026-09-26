#include<stdio.h>
#include<string.h>
  int main(){
  	char str[100];
  	int len;
  	
  	printf("enter a string\n");
  	scanf("%s",str);
  	
  	len=strlen(str);
  	if(len<=1){
  		printf("string too short to swap!");
	  }else{
	  	char temp=str[0];
	  	str[0]=str[len-1];
	  	str[len-1]=temp;
	  	printf("new string %s\n",str);
	  }
	  return 0;
  	
  }