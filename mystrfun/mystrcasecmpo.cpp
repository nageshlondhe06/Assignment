#include<stdio.h>
#include <ctype.h>

int mystrncasecmp(const char *s1, const char *s2, int n) {
    while (n-- && *s1 && *s2) {
        char c1 = tolower(*s1);
        char c2 = tolower(*s2);
        if (c1 != c2) return c1 - c2;
        s1++;
        s2++;
    }
    return 0;
}
int main(){
	char str1[]="hello";
	char str2[]="world";
	mystrncasecmp(str1, str2, 5);
		printf("Case-insensitive compare: %d\n", mystrncasecmp("Hello", "HELLO", 5)); 

}