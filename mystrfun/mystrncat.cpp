#include<stdio.h>
#include<string.h>

void mystrncat(char *dest, const char *src, int n) {
    while (*dest) dest++;
    while (n-- && *src) {
        *dest++ = *src++;
    }
    *dest = '\0';
}
int main(){
	char str1[50] = "Hello";
char str2[] = "World";
mystrncat(str1, str2, 3);
printf("Concatenated: %s\n", str1);
}