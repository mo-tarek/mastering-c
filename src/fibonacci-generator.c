#include <stdio.h>

// Function to generate fibonacci sequence up to n terms
void generate_fibonacci_terms(int n){
	unsigned long long first = 0, second = 1, next;

	printf("Fibonacci sequence up to %d terms:\n");
	for(int i = 0; i <= n; i++){
		printf("%llu", first);
		next = first + second;
		first = second;
		second = next;
	}
	printf("\n");
}


// Function to generate fibonacci sequence until a specified value
void generate_fibonacci_value(unsigned long long limit){
	unsigned long long first = 0, second = 1, next;

	printf("Fibonacci sequence up to value %llu:\n", limit);
	printf("%llu", first);

	while(second <= limit){
		printf("%llu", second);
		next = first + second;
		first = second;
		second = next;
	}
	printf("\n");
}


int main(void){
	int choice;

	printf("Choose an option:\n");
	printf("1. Generate fib. seq. up to n terms\n");
	printf("2. Generate fib. seq. up to a specified value\n");
	
	printf("Enter your choice (1 or 2): ");
	scanf("%d", &choice);
	
	if(choice == 1){
		int n;

		printf("Enter the number of terms: ");
		scanf("%d", &n);
		generate_fibonacci_terms(n);
	}else if(choice == 2){
		unsigned long long limit;

		printf("Enter the limit value: ");
		scanf("%llu", &limit);
		generate_fibonacci_value(limit);
	}else{
		printf("Invalid choice\n");
	}

	return 0;
}
