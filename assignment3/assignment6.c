int fact();
void main(){
	
	int f=fact();
	
	
}




int fact ()
{
	int n;
	printf("enter you number");
	scanf("%d",&n);
	int i =1;
	int fact =1;
	while(i<=n){
		fact *=i;
		i++;
	}
	printf("factorial =%d",fact);
	return 0;
	
}