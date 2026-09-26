#include<stdio.h>
#include<string.h>
char* mystrnstr(const char *haystack, const char *needle, int n){
	int len =0;
	while(needle[len]) len++;
	for(int i=0;i<=n -len;i++){
		if(strncmp(haystack + i, needle, len)==0) return(char*)(haystack+i);
  }
   return NULL;
}
int main(){
	
	char text[]="Hello Copilot";
	char *ops= mystrnstr(text,"Cop",10);
	if(ops)	printf("substring found %s\n",ops);
}