#include<stdio.h>
#include<string.h>

int main(){
	char str[100],ch;
	int i,found=0;
	
	printf("enter atring ");
	scanf(" %[^\n]",str);
	
	getchar();
	
	printf("enter a charecter to search ");
	scanf("%c",&ch);
	
	for(i=0; i<strlen(str); i++){
		if(str[i]==ch){
			printf("character '%c' found at position %d \n",ch, i+1);
			found =1;
		}
	}
	if(!found){
		printf("character '%c' not found in the string \n",ch);
		
	}
	return 0;
}