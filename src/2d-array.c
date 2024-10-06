#include <stdio.h>

#define ROWS 3
#define ROWS 3

int main(void){
	// Declare and initalize a 2D array
	int matrix[ROWS][COLS] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	// Print the 2D array
	printf("2D Array (Matrix):\n");
	for(int i = 0; i < ROWS; i++){
		for(int j = 0; j < COLS; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}
