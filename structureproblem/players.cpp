#include<stdio.h>
#include<string.h>
struct player{
	char name[50];
	int matches;
	int run;
	int wickets;
	
};

void acceptplayers(struct player arr[],int size){
	for(int i=0; i<size;i++){
		
		printf("enter details for player %d\n",i+1);
		printf("name");
		scanf("%s",arr[i].name);
		
		printf("matches played");
		scanf("%d",&arr[i].matches);
		
		printf("runs scored");
		scanf("%d",&arr[i].run);
		
		printf("wickets taken");
		scanf("%d",&arr[i].wickets);
	}
}

void displayplayers(struct player arr[],int size){
	printf("player information\n");
	for(int i=0;i<size;i++){
		printf("player %d name=%s, matches=%d, run=%d, wickets=%d\n",i+1,arr[i].name, arr[i].matches,arr[i].run, arr[i].wickets);
		
	}
}


void displaymax(struct player arr[],int size){
	int maxrunsindex=0, maxwicketsindex=0;
	for(int i=1;i<size;i++){
		if(arr[i].run >arr[maxrunsindex].run){
			maxrunsindex=i;
		}
	
	if(arr[i].wickets >arr[maxwicketsindex].wickets){
		maxwicketsindex=i;
	}
}

printf("player with maximum run\n");
printf("name=%s, run=%d\n",arr[maxrunsindex].name, arr[maxrunsindex].run);

printf("player with maximum wickets\n");
printf("name=%s, wickets=%d\n",arr[maxwicketsindex].name, arr[maxwicketsindex].wickets);

}
int main(){
	struct player players[10];
	acceptplayers(players, 10);
	
	displayplayers(players,10);
	
	displaymax(players,10);
	return 0;
}
