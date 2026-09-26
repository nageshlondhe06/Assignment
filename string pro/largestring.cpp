#include<stdio.h>
#include<string.h>
int main(){
	
	char str1[100],str2[200];
	int len1=0, len2=0, i;
	
	printf("enter first string ");
	scanf("%s",str1);
	for(i=0;i<str1[i] !='\0';i++){
		len1++;
	}
	
	getchar();
	
	printf("entr second string ");
	scanf("%s",str2);
	for(i=0;i<str2[i] !='\0';i++){
		len2++;
	}
	
	if(len1>len2){
		printf("large string %s",str1);
	}else if(len2>len1){
		printf("large string %S",str2);
	}else {
		printf("both string are of equal lenght ");
	}
	return 0;


   
}