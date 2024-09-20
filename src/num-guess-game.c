#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int num, guess, attempts;
	
	// Seed the random number generator with the current time
	srand(time(NULL));

	// Generate a random number between 1 and 100
	num = rand() % 100 + 1;

	printf("Welcome to the number guessing game!\n");
	printf("I've selected a number between 1 and 100\n");
	printf("Try to guess it!\n");

	// Game Loop
	do{
		printf("Enter your guess: ");
		scanf("%d", &guess);
		attempts++;

		if(guess < num){
			printf("Too low! Try again\n");
		}else if(guess > num){
			printf("Too high! Try again\n");
		}else{
			printf("Congrats! you've guessed %d in %d attempts\n", num, attempts);
		}
	}while(guess != num);

	return 0;
}
