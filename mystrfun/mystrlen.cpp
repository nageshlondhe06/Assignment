#include<stdio.h>

int mystrlen(const char *str){
	int lenght=0;
	while(*str !='\0'){
		lenght++;
		str++;
	}
    return	lenght;
}
int main(){
	char str[]="hello copilot!";
	int len = mystrlen(str);
	
	printf("string %s\n",str);
	printf("lenght %d\n",len);
	return 0;
}
