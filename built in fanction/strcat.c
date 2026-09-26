#include<stdio.h>
#include<string.h>
int main(){
	
	char a[20]="hello";
	char b[]="world";  
   strcat(a,b);  
   printf("concatenated %s \n",a);     
   
   
   char c[20]="patil";
	char d[]="world!!!";  
   strncat(c,d,5);  
   printf("partial concat %s \n",c);  
   
   printf("compare %d\n",strcmp("ab","cd"));
      
    printf("compare first 2 chars %d\n",strncmp("abrm","cdtu",2))  ;
    
    
    char str[]="patil thinking";
    printf("first 't' %s\n",strchr(str,'t'));
    printf("last 't' %s\n",strrchr(str,'t'));
    
    printf("substring  'world' %s\n",strstr(str,"world"));
    
    
    printf("\n");
    
    
    char text[]="hello world copilot";
    char *token=strtok(text," ");
    while(token){
    	printf("token %s\n",token);
    	token=strtok(NULL," ");
	}
    
    char *dup=strdup("dupli");
    printf("duplicated %s\n",dup);
     free(dup);
    
    
    printf("\n");
    
    printf("letters before digit %lu\n",strspn("heloo123","abcdefghijklnopqrtuvwABCDEFGHIJKLN"));
    printf("\n");
    
    printf("first digit position %lu\n",strcspn("hello123","0123456789"));
    
    
	
}