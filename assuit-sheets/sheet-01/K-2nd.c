#include <stdio.h>

int main(void){
	int A, B, C;

	printf("Enter two integer numbers: ");
	scanf("%d %d %d", &A, &B, &C);

	// Intialize min and max variables
	int min, max;


	// Find minimum
	min = A; // Assume A is the minimum
	if(B < min) min = B; // Update min if B is smaller
	if(C < min) min = C; // Update min if C is smaller
	
	// Find maximum
	max = A; // Assume A is the maximum
	if(B > max) max = B; // Update max if B is larger
	if(C > max) max = C; // Update max if C is larger
	
	// Prints results 
	printf("%d %d\n", min, max);



	return 0;
}
