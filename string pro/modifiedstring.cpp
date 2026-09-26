#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i;
	
	printf("enter astring \n");
	scanf("%s",str);
	
	for(i=0; i<strlen(str);i++){
		if(str[i]=='a'){
			str[i]='$';
		}
	}
	printf("modified string %s \n",str);
	
	return 0;
	
}