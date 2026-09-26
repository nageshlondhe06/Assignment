#include<stdio.h>
void main(){
int arr[10];
int size=10;
int i;
printf("enter element in an array");
for (int i=0;i<size;i++){
	scanf("%d",&arr[i]);
	
}
  for(int i=0;i<size;i++){
	printf("%d",arr[i]);
	
	
	int ele;
	printf("enter element you want to search");
	scanf("%d",&ele);
	int flag=-1;
	for (int i=0;i<size;i++)
	{
		
		if (arr[i]==ele)
          {
	       flag=i;
	        break;
	      }
	}
		if(flag==-1)
		printf("not found");
		else
		printf("found at %d index",flag);
   }

}