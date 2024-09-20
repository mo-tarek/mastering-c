#include <stdio.h>

void celsiusToFahrenheit(float celsius){
	float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
	printf("%.2f C = %.2f F\n", celsius, fahrenheit);
}

void fahrenheitToCelsius(float fahrenheit){
	float celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
	printf("%.2f F = %.2f C\n", fahrenheit, celsius);
}

void celsiusToKelvin(float celsius){
	float kelvin = celsius + 273.15;
	printf("%.2f C = %.2f K\n", celsius, kelvin);
}

void kelvinToCelsius(float kelvin){
	float celsius = kelvin - 273.15;
	printf("%.2f K = %.2f C", kelvin, celsius);
}

void fahrenheitToKelvin(float fahrenheit){
	float kelvin = (fahrenheit - 32.0) * (5.0 / 9.0) + 273.15;
	printf("%.2f F = %.2f K", fahrenheit, kelvin);
}

void kelvinToFahrenheit(float kelvin){
	float fahrenheit = (kelvin - 273.15) * (5.0 / 9.0) + 32.0;
	printf("%.2f K = %.2f F\n", kelvin, fahrenheit);
}


int main(void){
	int choice;
	float temp;

	printf("Tempreature Converter\n");
	printf("1. Celsius to Fahrenheit\n");
	printf("2. Fahrenheit to Celsius\n");
	printf("3. Celsius to Kelvin\n");
	printf("4. Kelvin to Celsius\n");
	printf("5. Fahrenheit to Kelvin\n");
	printf("6. Kelvin to Fahrenheit\n");
	
	printf("Enter your choice (1-6): ");
	scanf("%d", &choice);

	printf("Enter the temperature: ");
	scanf("%f", &temp);

	switch(choice){
		case 1:
			celsiusToFahrenheit(temp);
			break;

		case 2:
			fahrenheitToCelsius(temp);
			break;

		case 3:
			celsiusToKelvin(temp);
			break;


		case 4:
			kelvinToCelsius(temp);
			break;

		case 5:
			fahrenheitToKelvin(temp);
			break;

		case 6:
			kelvinToFahrenheit(temp);
			break;
		default:
			printf("Invalid choice! Maybe out of Range\n");
	}

	return 0;
}
