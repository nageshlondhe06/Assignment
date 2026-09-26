
 
 
 #include <stdio.h>


int palindrome(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (palindrome(n))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

int palindrome(int n) {
    int temp = n, rev = 0;

    while (temp > 0) {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    return (rev == n);  
}