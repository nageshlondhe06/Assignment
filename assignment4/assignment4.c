#include<stdio.h>
 int prime( int num){
 	if (num<=1) return 0;
 	int i;
 	for(i =2;i<=num/2;i++){
 		if(num%i ==0) return 0;
 		
	 }
	 return 1;
 }
 
 int reversenumber(int num){
 	int rev=0;
 	for(rev =0; num>0; num/=10){
 		rev =rev *10 +(num % 10);
	 }
	 return rev;
 }
 
 int sumdigits(int num){
 	int sum=0;
 	for(sum=0 ;num>0;num/=10){
 		sum +=num %10;
	 }
	 return sum;
 }
 
 int main(){
 	int choice, num;
 	printf(" enter a number\n ");
 	scanf("%d",&num);
 	printf("/n menu \n");
 	printf("1. check evemn  or odd\n");
 	printf("2. check primr or not\n");
 	printf("3. check palindrome or not\n ");
 	printf("4. check positive,negative or zero\n ");
 	printf("5. reverse a number\n ");
 	printf("6. find sum of digits\n");
 	printf("enter you choice \n");
 	scanf("%d",&choice);
	  
	  
	  switch (choice){
	  	case 1:
	  	if(num%2 ==0)
	  	printf("%d is even",num);
	  	else 
		  printf("%d is odd ",num);
		  break;
		  
		  case 2:
		  	if(num/2!=0)
		  	printf("%d is prime",num);
		  	else
		  	printf("%d is not prime", num);
		  	break;
		  	
		  	case 3:
		  		if(reversenumber(num)==num)
		  		printf("%d is palindrome ",num);
		  		else
		  		printf("%d is not palindrome ",num);
				 break;
				 
				 case 4:
				 if(num>0)
				 printf("%d is positive ",num);
				 else if(num<0)
				 printf("%d is negative ", num);
				 else
				 printf("number is zero ");
				 break;
				 
				 case 5:
				 	printf("sum of digits of %d is %d",num ,reversenumber(num));
				 	break;
				 	
				 	case 6:
				 		printf("sum of digits of %d is %d",num ,sumdigits(num));
						 break;
						 
						 default:
						 	printf("Invialid choice!");
						 	
				 
				 
				 	  	
	  }
	  return 0;
 }
 
 