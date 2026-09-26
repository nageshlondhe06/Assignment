#include <stdio.h>
#include <ctype.h>

void mystrupper(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

int main() {
    char text[] = "Hello Copilot";
    mystrupper(text);
    printf("Uppercase: %s\n", text);
    return 0;
}