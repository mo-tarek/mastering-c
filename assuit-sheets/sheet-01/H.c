#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){	
	int num1, num2, result;
	
	printf("enter two integer numbers: ");
	scanf("%d%d", &num1, &num2);
	
	// Check num2 for not being zero
	// I know this isn't a good style to write code
	if(num2 == 0){
		perror("Error! divison by zero\n");
		return EXIT_FAILURE;
	}else{
		printf("floor %d/%d = %.2lf\n", num1, num2, floor((double)num1/num2));	
		printf("ceil %d/%d = %.2lf\n", num1, num2, ceil((double)num1/num2));	
		printf("round %d/%d = %.2lf\n", num1, num2, round((double)num1/num2));	
	}

	return 0;
}
