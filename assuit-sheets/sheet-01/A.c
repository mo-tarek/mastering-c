#include <stdio.h>
#include <stdlib.h>

int main(void){
	char *name = malloc(100 * sizeof(char)); // Allocate Memory for the string

	if(name == NULL){ // Check for successful allocation
		fprintf(stderr, "Memory allocation failed\n");
		return 1;
	}

	printf("give me your name: ");
	scanf("%s", name); // Read input into the allocated memory

	printf("Hello, %s\n", name); 
	
	free(name); // Free the allocated memory

	return 0;
}
