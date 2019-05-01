#include <stdio.h> 

int main() {
	
	
	int i,x,players, rounds;
	float scores, average,temp;
	
	printf("\t\t\t\t\tBowling Scoreboard v1.0\n\n");
	
	printf("\nHow many people playing? : ");
	scanf("%d", &players);
	
	printf("\nHow many rounds? : ");
	scanf("%d", &rounds);
	
	for(i=1; i<=players; i++) {
		
		
		for(x=1; x<=rounds; x++) {
			
			printf("\nType %d. Player %d. Round Score : ",i,x);
			scanf("%f", &scores);
			temp += scores;
			
		}
		
		scores = 0;
		average = temp / rounds;
		printf("\n%d. Player Average is %g.\n",i,average);
		average = 0;
		temp = 0;
		
	}
	
	printf("\nProgram finished.");
	
	return 0;
}
