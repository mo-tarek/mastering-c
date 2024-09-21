#include <stdio.h>

int main(void){
	int A, B, C, max, min;

	printf("Enter 3 numbers: ");
	scanf("%d%d%d", &A, &B, &C);

	if(A > B && A > C){
		max = A;
		if(B > C){
			min = C;
		}else{
			min = B;
		}
	}else if(B > A && B > C){
		max = B;
		if(A > C){
			min = C;
		}else{
			min = A;
		}
	}else{
		max = C;
	}

	printf("%d %d\n", min, max);

	return 0;
}
