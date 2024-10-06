#include <stdio.h>

#define DEPTH 2
#define ROWS 3
#define COLS 4

int main(void){
	// Declare and initialize a 3D array
	int tensor[DEPTH][ROWS][COLS] = {
		{
			{1, 2, 3, 4},
			{5, 6, 7, 8},
			{9, 10, 11, 12}
		},
		{
			{13, 14, 15, 16},
			{17, 18, 19, 20},
			{21, 22, 23, 24}
		}
	};

	// print the 3D array
	printf("3D array:\n");
	for(int d = 0; d < DEPTH; d++){
		printf("Depth %d:\n", d);
		for(int i = 0; i < ROWS; i++){
			for(int j = 0; j < COLS; j++){
				printf("%d ", tensor[d][i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
