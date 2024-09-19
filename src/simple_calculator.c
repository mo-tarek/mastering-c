#include <stdio.h>

int main(void){
	char operator;
	double num1, num2, result;
	
	// Display options to the user
	printf("Enter an operator (+, -, *, /): ");
	scanf("%c", &operator);

	// Prompt the user to enter two numbers
	printf("Enter two numbers: ");
	scanf("%lf %lf", &num1, &num2);


	// Perform calculation based on the operator
	switch(operator){
		case '+':
			result = num1 + num2;
			printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
			break;
		case '-':
			result = num1 - num2;
			printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
			break;
		case '*':
			result = num1 * num2;
			printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
			break;
		case '/':
			// Validation for prevent divsion by zero
			if(num2 != 0){
				result = num1 / num2;
				printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
			}else{
				printf("Error! Division by zero\n");
			}
			break;
		default:
			printf("Error! Invalid operator\n");
			break;
	}

	return 0;
}
