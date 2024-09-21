#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

// Fuction to check if a string is a palindrome
int isPalindrome(const char *str){
	int left = 0;
	int right = strlen(str) - 1;

	while(left < right){
		// Ignore non-alphanumeric characters
		while(left < right && !isalnum(str[left])) left++;
		while(left < right && !isalnum(str[right])) right--;

		// Compare characters
		if(tolower(str[left]) != tolower(str[right])){
			return 0; // Not a palindrome
		}
		left++;
		right--;
	}
	return 1; // is a palindrome
}

int main(void){
	char str[MAX_LENGTH];

	printf("Enter a string: ");
	fgets(str, MAX_LENGTH, stdin);

	// Remove newline character from fgets
	str[strcspn(str, "\n")] = '\0';

	if(isPalindrome(str)){
		printf("\"%s\" is a palindrome\n", str);
	}else{
		printf("\"%s\" is not a palindrome\n", str);
	}

	return 0;
}
