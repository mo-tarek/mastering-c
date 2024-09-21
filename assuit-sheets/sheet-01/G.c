#include <stdio.h>

int main(void){
	int N;

	printf("enter a number: ");
	scanf("%d", &N);

	// I used a formula to calculate summation from 1 to N
	// But, we also can use a for-loop to iterate from 1 to N
	int sum1ToN = N * (N + 1) / 2;
 	
	printf("%d\n",sum1ToN);

	return 0;
}
