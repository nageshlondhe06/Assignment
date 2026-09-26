#include<stdio.h>
#include<string.h>
int main(){
	char str[100],newstr[100];
	int i,j=0;
	
	printf("enter astring ");
	scanf("%s",str);
	
	for(i=0;i<strlen(str);i++){
		if(i %2==0){
			newstr[j++]=str[i];
		}
	}
	newstr[j]='\0';
	
	printf("string after removing odd index characters %s\n",newstr);
	return 0;
}