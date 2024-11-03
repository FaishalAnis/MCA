#include <stdio.h>
int main() {
	int first = 0, second = 1, num, temp;
	printf("Fibonacci Series Till N numbers \n");
	printf("Enter the number: \n");
	scanf("%d", &num);

	printf("%d, %d, ", first, second);

	temp = first + second;

	for (int i = 3; i< num; ++i) {
		printf("%d, ", temp);
		first = second;
		second = temp;
		temp = first + second;
	
	}
	printf("\n");
	return 0;
}
