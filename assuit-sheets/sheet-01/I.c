#include <stdio.h>

int main(void){
	int A, B;

	printf("Enter two integer numbers: ");
	scanf("%d%d", &A, &B);

	if(A >= B){
		printf("Yes\n");
	}else{
		printf("No\n");
	}

	return 0;
}
