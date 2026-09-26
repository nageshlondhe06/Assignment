#include<stdio.h>
#include<string.h>
char* mystrstr(const char *haystack, const char *needle){
	int len = strlen(needle);
	while(*haystack){
		if(strncmp(haystack, needle, len)==0){
			return(char*)haystack;
			
		}
		haystack++;
	}
	return NULL;
}
int main(){
	
	char text[]="hello copilot";
	char *pos=mystrstr(text, "copilot");
	if(pos)
	printf("substring found %s\n",pos);
	else 
	printf("substring not found ");
	return 0;
}