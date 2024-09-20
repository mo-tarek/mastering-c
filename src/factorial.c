#include <stdio.h>


// Function to calculate factrial using iteration
unsigned long long iterative_factorial(int n){
	unsigned long long result = 1;
	for(int i = 1; i <= n; i++){
		result *= i;
	}
	return result;
}


// Function to caculate factorial using recursion
unsigned long long recursive_factorial(int n){
	if(n == 0 || n == 1){
		return 1; // Base case
	}
	return n * recursive_factorial(n-1); // Recursive case
}


int main(void){
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if(num < 0){
	    printf("Factorial isn't defined for negative numbers\n");
	    return 1; // Exit with error code
    }

    // Calculate factorial using iterative method
    unsigned long long iterative_result = iterative_factorial(num);
    printf("Iterative factorial of %d is: %llu\n", num, iterative_result);

    // Calculate factorial using recursive method
    unsigned long long recursive_result = recursive_factorial(num);
    printf("Recursive factorial of %d is: %llu\n", num, recursive_result);

    return 0;
}
