#include <stdio.h>

int main(void){
	int intValue;
	long long int longValue;
	char charValue;
	float floatValue;
	double doubleValue;

	// Prompt the user for numbers
	printf("give me numbers in that order [i, lli, ch, f, d]: ");
	// Read the input values
	scanf("%d %lld %c %f %lf", &intValue, &longValue, &charValue, &floatValue, &doubleValue);

	// Note: I don't really care what the output format
	printf("Integer: %d\n", intValue);
	printf("Long Long: %lld\n", longValue);
	printf("Character: %c\n", charValue);
	printf("Float: %.2f\n", floatValue); // Optional: format to 2 decimal places
	printf("Double: %.2lf\n", doubleValue); // Optional: format to 2 decimal places

	
	return 0;
}
