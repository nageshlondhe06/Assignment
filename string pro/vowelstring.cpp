#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char str[100];
	int i, count=0;
	
	printf("enter a string ");
	scanf("%s", str);
	
	for(i=0;i<strlen(str);i++){
		char ch=tolower(str[i]);
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
			count++;
		}
	}
	printf("number of vowels in the string %d",count);
	return 0;
}