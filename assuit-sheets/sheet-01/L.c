#include <stdio.h>
#include <string.h>

int main(void){
	char F1[50], S1[50]; // First person's first and second names
	char F2[50], S2[50]; // Second person's first and second names
			     
	// Read names for the first person
	printf("Enter 1st person's name (first and last): ");
	scanf("%s %s", F1, S1);

	// Read names for the second person
	printf("Enter 2nd person's name (first and last): ");
	scanf("%s %s", F2, S2);


	// Compare the second names
	if(strcmp(S1, S2) == 0){
		printf("ARE Brothers\n");
	}else{
		printf("NOT\n");
	}
	


	return 0;
}
