#include <stdio.h>

void mystrncpy(char *dest, const char *src, int n) {
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0'; 
}

int main() {
    char source[] = "Programming";
    char destination[20];

    mystrncpy(destination, source, 8);

    printf("Copied string (first 8 chars): %s\n", destination);

    return 0;
}