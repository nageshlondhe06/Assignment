#include<stdio.h>
void alphabet();
int main(){
	
	alphabet();
	return 0;
}


void alphabet()
{
	char ch;
	printf("enter a charectar:");
	scanf("%c",&ch);
	if((ch>='A'&& ch<='Z') || (ch>='a'&&ch<='z')){
		char lower=(ch>='A'&&ch<='Z')? ch +32:ch;
		if(lower =='a'||lower=='e'||lower=='i'||lower=='o'){
			printf("%c is a vowel\n",ch);
		}else{
			printf("%c is a consonant\n",ch);
		}
	}else if(ch=='A' && ch=='Z')
		{
		printf("%c is not an alphabet charactar\n",ch);
	}
	
}