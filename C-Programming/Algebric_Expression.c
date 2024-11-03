#include <stdio.h>
int main() {
	float a, b, x, result;
	printf("___________ALGEBRIC EXPRESSION  (ax+b)/(ax-b)_____________\n");
	printf("Enter a, b, and x : \n");
	scanf("%f %f %f", &a, &b, &x);

	if (a * x - b == 0) {
		printf("Denominator can not be zero");
	}
	else {
		result = (a * x + b) / (a * x - b);
		printf("The result of the expression is: %.2f\n", result);
	}

}
