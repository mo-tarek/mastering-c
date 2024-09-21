#include <stdio.h>

#define PI 3.141592653

int main(void){
	double Area, R;

	printf("enter the radius of circle: ");
	scanf("%lf", &R);

	Area = PI * R * R;

	printf("%.9lf\n", Area);

	return 0;
}
