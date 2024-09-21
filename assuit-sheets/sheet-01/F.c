#include <stdio.h>

int main(void){
	int N, M, lastDigit;

	printf("enter two numbers: ");
	scanf("%d%d", &N, &M);


	int summation = (N % 10) + (M % 10);
	
	printf("%d\n", summation);

	
	return 0;
}
