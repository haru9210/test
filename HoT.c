#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	srand((unsigned int)time(NULL));

	printf("Tossing a coin...\n");

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
