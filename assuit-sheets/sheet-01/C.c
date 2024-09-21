#include <stdio.h>

int main(void){
	double X, Y;

	// Prompt the user for two numbers
	printf("enter two numbers: ");
	// Read input
	scanf("%lf %lf", &X, &Y);

	
	// Calculate summation, multiplication, and subtraction
	double summation = X + Y;
	double multiplication = X * Y;
	double subtraction = X - Y;
	

	// Print the results
	printf("%.2lf + %.2lf = %.2lf\n", X, Y, summation);
	printf("%.2lf * %.2lf = %.2lf\n", X, Y, multiplication);
	printf("%.2lf - %.2lf = %.2lf\n", X, Y, subtraction);


	return 0;
}
