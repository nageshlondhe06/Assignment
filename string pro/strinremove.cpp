#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int n,i;
	
	printf("enter astring \n");
	scanf("%s",str);
	
	printf("enter the index to remove (0-based)\n");
	scanf("%d",&n);
	
	int len=strlen(str);\
	
	if(n<0 ||n>=len){
		printf("invalid index! must be between 0 and %d\n",len-1);
	}else{
		for(i=n;i<len-1;i++){
			str[i]=str[i+1];
		}
		str[len-1]='\0';
		printf("modified string %s\n",str);
		
	}
	return 0;
}