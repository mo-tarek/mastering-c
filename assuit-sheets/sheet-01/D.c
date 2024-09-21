#include <stdio.h>

int main(void){
	int A, B, C, D;

	printf("enter four integer numbers: ");
	scanf("%d %d %d %d", &A, &B, &C, &D);

	int X = (A * B) - (C * D);

	printf("Difference = %d", X);

	return 0;
}
