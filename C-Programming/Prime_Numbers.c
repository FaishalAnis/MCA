#include <stdio.h>
int main() {
	int num, count = 0;
	printf("------Prime Number Series------\n");
	printf("Enter the number: \n");
	scanf("%d, ", &num);

	for (int i = 1; i<num; i++) {
		count = 1;
		for (int j = 2; j*j<=i; j++) {
			if (i%j == 0) {
				count = 0;
				break;
		}
		}
		if (count) {
			printf("%d, ", i);
		}
	}
	printf("\n");
	return 0;
}
