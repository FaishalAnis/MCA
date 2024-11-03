#include <stdio.h>
int main() {
	int num, sum = 0, i;
	printf("_____Perfect Number______\n");
	printf("Enter the Number: \n");
	scanf("%d", &num);

	for (i = 1; i<= num/2; i++) {
		if( num % i == 0);
		sum = sum + i;
		
	}
	if (num == sum) {
		printf("It is a perfect number\n");
	}
	else {
		printf("It is not a perfect number\n");
	}

}
