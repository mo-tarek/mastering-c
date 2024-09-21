#include <stdio.h>

int main(void){
	int A, B;

	printf("Enter two integer numbers: ");
	scanf("%d%d", &A, &B);

	// Check for multiples
	if(A % B == 0 || B % A == 0){
		printf("Multiples\n");
	}else{
		printf("No Multiples\n");
	}

	return 0;
}
