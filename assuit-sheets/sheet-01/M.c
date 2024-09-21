#include <stdio.h>
#include <stdlib.h>

int main(void){
	char X;

	printf("Enter a letter to check: ");
	scanf("%c", &X);


	if((X >= 'A' && X <= 'Z') || (X >= 'a' && X <= 'z')){
		printf("ALPHA\n");
		// Capitalize if it's a lowerCase and vice versa
		if(X >= 'a' && X <= 'z'){
			X -= 32; // Convert to upperCase
			printf("Converted character: %c\n", X);
		}else{
			X += 32; // Convert to lowerCase
			printf("Converted character: %c\n", X);
		}
	}else if(X >= '0' && X <= '9'){
		printf("IS DIGIT\n");
	}else{
		printf("Not math any case\n");	
	}
	
	return 0;
}
