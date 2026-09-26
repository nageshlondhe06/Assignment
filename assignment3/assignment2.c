#include<stdio.h>
 void main(){
 	int n =121;
 	int temp =n, rev =0;
 	while (temp > 0){
 		int rem = temp % 10;
 		rev = rev *10 +rem;
 		temp /=10;
	 }
	 if(rev ==n)
	 printf("palidrome ");
	 else
	 printf("not palindrome ");
 }