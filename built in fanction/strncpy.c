#include<stdio.h>
#include<string.h>
int main(){
	char src[]="programming";
	char dest[20];
	strncpy(dest,src,11);
	dest[11]='/0';
	printf("partial copy %s\n",dest);
}