#include <stdio.h>
int main() {
	int choice;
	float temp;

	printf("_____Temperature Conversion______\n");
	printf("Enter your choice 1 for Celcius to Fahrenheit\n");
	printf("Enter your choice 2 for Fahrenheit to Celcius\n");
	scanf("%d", &choice);

	switch(choice) {
		case 1:
			printf("Enter temperature in Celcius\n");
			scanf("%f", &temp);
			printf("Temperature in Fahrenheit: %.2f\n", (temp * 9 / 5) + 32 );
			break; 
		case 2:
                        printf("Enter temperature in Fahrenheit\n");
                        scanf("%f", &temp);
                        printf("Temperature in Celcius: %.2f\n", (temp - 32) * 5 / 9 );
                        break;
		default:
			printf("Invalid Choice\n");
			break;
	}
	return 0;

}
