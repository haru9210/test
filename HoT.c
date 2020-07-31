#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	char name[100];
	printf("Who are you?\n");
	scanf("%s",name);
	printf("Hello, %s!\n",name);



	srand((unsigned int)time(NULL));
	printf("\nTossing a coin...\n");

	int score=0;
	for(int i=1;i<=3;i++){
		int coin = rand()%2;
		
		printf("Round %d: ", i);
		if(coin)printf("Heads");
		else printf("Tails");

		score+=coin;
		printf("\n");
	}
	printf("\nHeads: %d, Tails: %d\n", score, 3-score);
}
