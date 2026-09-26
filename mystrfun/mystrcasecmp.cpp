#include<stdio.h>
#include<ctype.h>
int mystrcasecmp(const char *s1, const char *s2){
	while(*s1 &&*s2){
		char c1=tolower(*s1);
		char c2=tolower(*s2);
		if (c1!=c2) return c1-c2;
		s1++;
		s2++;
	}
	return *s1 -*s2;
}
int main(){
	char str1[]="Hello";
	char str2[]="hello";
	
	int result =mystrcasecmp(str1, str2);
	if(result ==0)
	printf("string are equal (case-insensitive)\n");
	else
	printf("string differ\n");
	return 0;
}