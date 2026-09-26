#include<stdio.h>
#include<string.h>
int main(){
	char str[200];
	int i,count=0;
	
	printf("enter a string ");
	scanf("%s",str);
	
	for(i=0;i<strlen(str);i++){
		if(str[i] !=' '&&(i==0||str[i-1]==' ')){
			count++;
		}
	}
	printf("number of words in the string %d",count);
	return 0;
}