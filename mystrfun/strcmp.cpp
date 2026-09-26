#include<stdio.h>
int mystrcmp(const char*s1,const char *s2){
	
	while(*s1&&(*s1==*s2)){
		s1++;
		s2++;
	}
	return*(unsigned char*)s1-*(unsigned char*)s2;
}
int main(){
	char str1[]="hello";
	char str2[]="hello";
	char str3[]="world";
	
	printf("compare str1&str2 %d\n",mystrcmp(str1, str2));
	printf("Compare str1 & str3: %d\n", mystrcmp(str1, str3)); 
    printf("Compare str3 & str1: %d\n", mystrcmp(str3, str1));
    return 0;
}