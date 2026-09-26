#include<stdio.h>
void marks();
int main(){
	
	marks();
	return 0;
}





void marks()
{
	int mark=55;
	if(mark>=75){
		printf("A+");
	}else if( mark==55){
		printf("C+");
	}else if(mark==35){
		printf("fail");
	}else{
		printf("no grade defined\n");
	}

}