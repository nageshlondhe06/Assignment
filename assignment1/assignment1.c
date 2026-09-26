#include<stdio.h>
 void main(){
 	int n =121;
 	int temp =n, rev =0;
 	while (temp > 0){
 		int rem = temp % 10;
 		temp /=10;
 		rev = rev *10 +rem;
 		
	 }
	 if(rev ==n)
	 printf("palidrome ");
	 else
	 printf("not palindrome ");
 }