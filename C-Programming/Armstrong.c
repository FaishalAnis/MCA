#include <stdio.h>
#include <math.h>

int main() {
	int num, original, sum = 0, remainder, result = 0;
	printf("--------Armstrong Number-----------\n");
	printf("Enter the number: \n");
	scanf("%d", &num);

	original = num;

	while (original != 0) {
		remainder = original % 10;
		sum = sum + (remainder*remainder*remainder);
		original = original / 10;
	}
	if (sum == num) {
		printf("Its an Armstrong Number");
	}
	else {
		printf("Not an Armstrong Number");
	}
}
