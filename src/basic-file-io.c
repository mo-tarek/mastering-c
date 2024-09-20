#include <stdio.h>
#include <stdlib.h>


int main(void){
	FILE *file;
	char filename[] = "example.txt";
	char buffer[1024];

	// Writing to a file
	file = fopen(filename, "w"); // Open file for writing
	if(file == NULL){
		perror("Error opening file for writing");
		return EXIT_FAILURE;
	}

	fprintf(file, "Hello, World\n");
	fprintf(file, "This is a basic file I/o example in C\n");
	fclose(file); // Close the file
	

	// Reading from a file
	file = fopen(filename, "r"); // Open file for reading
	if(file == NULL){
		perror("Error opening file for reading");
		return EXIT_FAILURE;
	}


	printf("Contents of %s:\n", filename);
	while((fgets(buffer, sizeof(buffer), file)) != NULL){
		printf("%s", buffer);
	}
	
	fclose(file); // Close the file
	return EXIT_SUCCESS;

	return 0;
}
