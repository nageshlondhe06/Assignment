#include<stdio.h>
 int evenodd(int num);
 int prime(int num);
 int palindrome(int num);
 int reverseNumber(int num);
 int sumDigits(int num);
 int main(){
 

 	int choice, num;
 	
	 
 	printf("/n menu \n");
 	printf("enter 1 to check evemn  or odd \n");
 	printf("enter 2 to check prime or not \n");
 	printf("enter 3 to check palindrome or not\n ");
 	printf("enter 4 to check positive,negative or zero\n ");
 	printf("enter 5 to check reverse a number\n ");
 	printf("enter 6 to find sum of digits \n");
 	printf("enter 7 to exit \n");
 	
 	
 	printf("enter your choice");
 	scanf("%d",&choice);
 	
 	if(choice !=7){
 	printf("enter a number\n");
 	scanf("%d",&num);
      }
 if (choice == 1) {
        if (evenodd( num))
            printf("%d is Even\n", num);
        else
            printf("%d is Odd\n", num);
 	 } else if (choice == 2) {
        if (prime( num))
            printf("%d is Prime\n", num);
        else
            printf("%d is Not Prime\n", num);

    } else if (choice == 3) {
        if (palindrome( num))
            printf("%d is Palindrome\n", num);
        else
            printf("%d is Not Palindrome\n", num);

    } else if (choice == 4) {
        if (num > 0)
            printf("%d is Positive\n", num);
        else if (num < 0)
            printf("%d is Negative\n", num);
        else
            printf("Number is Zero\n");

    } else if (choice == 5) {
        printf("Reverse of %d is %d\n", num, reverseNumber(num));

    } else if (choice == 6) {
        printf("Sum of digits of %d is %d\n", num, sumDigits(num));

    } else if (choice == 7) {
        printf("Exit\n");

    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
 	
 	
 
 
 int evenodd(int num) {
    if (num % 2 == 0) 
        return 1;
    else 
        return 0;
    }
 
  
 int prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
 
 int palindrome(int num) {
    int temp = num, rev = 0;
    while (temp > 0) {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    return (rev == num);
}
int reverseNumber(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}
    
    int sumDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
    