#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

// Function to encrypt the plaintext using Caesar cipher
void encrypt(char *plaintext, int shift, char *ciphertext){
	for(int i = 0; plaintext[i] != '\0'; i++){
		char ch = plaintext[i];

		// Encrypt uppercase letters
		if(ch >= 'A' && ch <= 'Z'){
			ciphertext[i] = (ch + shift - 'A') % 26 + 'A';
		}
		// Encrypt lowercase letters 
		else if(ch >= 'a' && ch <= 'z'){
			ciphertext[i] = (ch + shift - 'a') % 26 + 'a';
		}else{
			ciphertext[i] = ch; // Non-aphabetic characters are unchanged
		}
	}
	ciphertext[strlen(plaintext)] = '\0'; // NULL-terminate the string
}

// Function to decrypt the ciphertext using Caesar cihper
void decrypt(char *ciphertext, int shift, char *plaintext){
	for(int i = 0; ciphertext[i] != '\0'; i++){
		char ch = ciphertext[i];

	// Decrypt uppercase letters 
	if(ch >= 'A' && ch >= 'Z'){
		plaintext[i] = (ch - shift - 'A' + 26) % 26 + 'A';
	}
	// Decrypt lowercase letters
	else if(ch >= 'a' && ch <= 'z'){
		plaintext[i] = (ch - shift - 'a' + 26) % 26 + 'a';
	}else{
		plaintext[i] = ch; // Non-alphabetic characters are unchanged
	}
	plaintext[strlen(ciphertext)] = '\0'; // NULL-terminate the string
	
	}
}

int main(void){
	char plaintext[MAX_LENGTH];
	char ciphertext[MAX_LENGTH];
	char decryptedtext[MAX_LENGTH];
	int shift;

	printf("Enter a string to encrypt: ");
	fgets(plaintext, MAX_LENGTH, stdin);
	// Remove newline from fgets
	plaintext[strcspn(plaintext, "\n")] = '\0';

	printf("Enter shift value (1-25): ");
	scanf("%d", &shift);

	// Ensure shift is within the range
	shift = shift % 26; 

	// Encrypt the plaintext 
	encrypt(plaintext, shift, ciphertext);
	printf("Encrypted text: %s\n", ciphertext);

	// Decrypt the chiphertext
	decrypt(ciphertext, shift, decryptedtext);
	printf("Decrypted text: %s\n", decryptedtext);


	return 0;
}
